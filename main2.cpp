//this is a file for me to better understand template


#include <iostream>
using namespace std;

const int MAX_LENGTH = 100;
const int GENE_SIZE = 4;


//----- model ----

template <class GeneType, const int GENE_SIZE>
class Model{
public:
	Model();
	void printRandom();
	int amount;
	int gene_size ;
};


template<class GeneType, const int GENE_SIZE>
Model<GeneType, GENE_SIZE>::Model(){
	amount = 0;
	gene_size = GENE_SIZE;
	cout << "gene size = " <<GENE_SIZE <<endl;
}

template<class GeneType, const int GENE_SIZE>
void Model<GeneType, GENE_SIZE>::printRandom(){
	cout <<"random = " << 88 <<endl;
}

//-----model inheritence 

class MyModel : Model<double, 4>
{
	public :
	MyModel();
};


MyModel::MyModel(){
	cout << "gene size = " << 5 <<endl;
	printRandom();
}


//----------model manager

template<class Model>
class ModelManager{
public: 
	ModelManager ();
	void insert(Model m);
// private:
	int length;

};

template<class Model>
ModelManager<Model>::ModelManager(){
	Model m;
	length = 0;
}

// void GList::insert(Model m){
// 	this->lst.push_back(m);
// 	length ++;
// }



int main(int argc, char *argv[]){

	cout <<"Now let me try "<<endl;

	Model<double, 100> md;
	MyModel mymd;

	ModelManager< Model<double, 100> > lst;

	// ---- 
	cout << lst.length << endl;



}