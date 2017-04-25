#include <iostream>
#include <vector>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

#include <set> 
#include <fstream>
#include <sstream>
#include <sys/time.h>
#include <sys/stat.h>
#include <cstdlib>
#include <math.h>



#include <boost/unordered_map.hpp>
#include <string>
#include <iostream>



using namespace std;
// gsl_rng *r;                                                                                      
// // gsl_rng *r;

// #define MODEL_GENESIZE  4 //global constant

// int printVector(double* v){
// 	cout << "[";
// 	for (int i = 0; i < (MODEL_GENESIZE - 1) ; i ++){
// 		// print vector
// 		cout << v[i] << ", ";
// 	}
// 	cout << v[MODEL_GENESIZE -1] << "]"<<endl;
// }



// // struct Model                                              //define chronmosome structs
// // {
// // 	double chrom[MODEL_GENESIZE];
// //     double fitness;
// // };





// void gsl_init()
// {
// 	unsigned long int Seed;        //static unsigned long int Seed
// 	struct timeval tv;
//     struct timezone tz;
//     gettimeofday(&tv,&tz);
//     Seed = tv.tv_sec * 1000000 + tv.tv_usec; 
//     cout << "The seed is: " << Seed <<endl;
//     r = gsl_rng_alloc(gsl_rng_default); // This function returns a pointer to a newly-created 
//     //instance of a random number generator of type T. For example, 
//     //the following code creates an instance of the Tausworthe generator,
//     //https://www.gnu.org/software/gsl/manual/html_node/Random-number-generator-initialization.html
//     gsl_rng_set(r, Seed);
    
// }


// // Model evolveModel(Model parent1, Model parent2){
// // 	Model child;
// // 	//first of all, go through each gene and set it to one of the parent's
// // 	for (k = 0; k < MODEL_GENESIZE/2; k++)  // for each gene
// //     {
// //         index = gsl_rng_uniform_int(r, 2);
// //         offspring.chrom[k] = selectparent[index].chrom[k];       
// //         double avg = (selectparent[0].chrom[k + MODEL_GENESIZE/2] + selectparent[1].chrom[k + MODEL_GENESIZE/2])/2;  //average?    
               
// //     }
// // 	index = gsl_rng_uniform_int(r, 2);

// // }


// int main(int argc, char *argv[])
// {	
// 	// int amount = 10;

// 	// Model result;
// 	// result.chrom =  = {1.0, 2.2, -3.2, -0.7};

// 	// cout <<"The result is: "<<endl;
// 	// printVector(result);

// 	// // double models[amount][size];
// 	// std::vector<Model> models;
// 	// for (int i = 0; i < amount; i ++){
// 	// 	Model m;
// 	// 	models.push_back(m);
// 	// 	for (int j =0 ; j < MODEL_GENESIZE; j++){
// 	// 		models[i] = models[i][j] = 0;
// 	// 	}
// 	// 	printVector(models[i]);
// 	// }


// 	// // after initialise, we try to evolve towards the result
// 	// gsl_init();
// 	// printf ("generator type: %s\n", gsl_rng_name (r));
// 	// printf ("seed = %lu\n", gsl_rng_default_seed);
// 	// printf ("first value = %lu\n", gsl_rng_get (r));
// 	// printf ("next value = %lu\n", gsl_rng_get (r));
// 	// printf ("next value = %lu\n", gsl_rng_get (r));
// 	// printf ("next value = %lu\n", gsl_rng_get (r));
// 	// printf ("next value = %lu\n", gsl_rng_get (r));
	

// 	// // select uniform way:
// 	// int index = gsl_rng_uniform_int(r, 50);
// 	// cout << "index selected (uniform) " << index<<endl;
// 	// index = gsl_rng_uniform_int(r, 50);
// 	// cout << "index selected (uniform) " << index<<endl;

	
// 	// index = gsl_ran_gaussian(r, 50);
// 	// cout << "index selected (gaussian) " << index<<endl;

// 	// index = gsl_ran_gaussian(r, 50);
// 	// cout << "index selected (gaussian) " << index<<endl;
// 	// index = gsl_ran_gaussian(r, 50);
// 	// cout << "index selected (gaussian) " << index<<endl;
// 	// index = gsl_ran_gaussian(r, 50);
// 	// cout << "index selected (gaussian) " << index<<endl;
// 	// index = gsl_ran_gaussian(r, 50);
// 	// cout << "index selected (gaussian) " << index<<endl;
// 	// index = gsl_ran_gaussian(r, 50);
// 	// cout << "index selected (gaussian) " << index<<endl;

// 	// cout << "exp"<<exp(1)<<endl;

// 	typedef boost::unordered_map<std::string, int> unordered_map;
// 	unordered_map map;

// 	map.emplace("cat", 4);
// 	map.emplace("shark", 0);
// 	map.emplace("spider", 8);

//   for (const auto &p : map)
//     std::cout << p.first << ";" << p.second << '\n';

//   std::cout << map.size() << '\n';
//   std::cout << map.max_size() << '\n';

//   std::cout << std::boolalpha << (map.find("cat") != map.end()) << '\n';
//   std::cout << map.count("shark") << '\n';

// 	// gsl_rng_free (r);
// }

class Model{
	
}

template< class T, bool (*comp)( T const &, T const & ) >
class Manager {
    struct ftor {
        bool operator()( T const &l, T const &r )
            { return comp( l, r ); }
    };
public:
    typedef std::set< T, ftor > t;
};

// usage

bool my_comparison( Model const &l, Model const &r ){
	return true;
};

int main(int argc, char *argv[]){
	
	Manager< Model, my_comparison >::t boo; // just the way you want it!



}