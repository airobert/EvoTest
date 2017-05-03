
#include "Viewer.h"
#include <enki/PhysicalEngine.h>
#include <enki/robots/e-puck/EPuck.h>
#include <enki/robots/marxbot/Marxbot.h>
#include <enki/robots/thymio2/Thymio2.h>
#include <QApplication>
#include <QtGui>
#include <iostream>


using namespace Enki;
using namespace std;


class EnkiPlayground : public ViewerWidget
{
protected:
	QVector<EPuck*> epucks;
	QMap<PhysicalObject*, int> bullets;
	
public:
	EnkiPlayground(World *world, QWidget *parent = 0) :
		ViewerWidget(world, parent)
	{
		EPuck *epuck = new EPuck;
		epuck->pos = Point(20, 15);
		epuck->leftSpeed = 4;
		epuck->rightSpeed = 5;
		world->addObject(epuck);
		
		epuck = new EPuck;
		epuck->pos = Point(20, -10);
		epuck->leftSpeed = 5;
		epuck->rightSpeed = 2;
		epuck->setColor(Color(1, 0, 0));
		world->addObject(epuck);

		epuck = new EPuck;
		epuck->pos = Point(0, 30);
		epuck->leftSpeed = 2;
		epuck->rightSpeed = 3;
		epuck->setColor(Color(0, 1, 0));
		world->addObject(epuck);

		Enki::Polygone p;
		const double amount = 9;
		const double radius = 5;
		const double height = 20;
		// std::cout <<"M_PI = " <<M_PI <<std::endl;
		for (double a = 0; a < 2*M_PI; a += 2*M_PI/amount)
			p.push_back(Enki::Point(radius * cos(a), radius * sin(a)));
		Enki::PhysicalObject* o = new Enki::PhysicalObject;
		Enki::PhysicalObject::Hull hull(Enki::PhysicalObject::Part(p, height));
		o->setCustomHull(hull, 1);
		o->pos = Enki::Point(100, 100);
		o->setColor(Enki::Color(0.4,0.6,0.8));
		world->addObject(o);

	}
};

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	// Create the world and the viewer
	bool igt(app.arguments().size() > 1);

	QImage gt;
	
	World world(35, 40, Color(0.9, 0.9, 0.9), World::GroundTexture());
	EnkiPlayground viewer(&world);
	
	viewer.show();
	
	return app.exec();
}

