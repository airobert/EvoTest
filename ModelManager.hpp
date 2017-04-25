
#include "parameters.hpp"


class Model{
public : 
	double gene[MODEL_GENESIZE];
	double mutation_strength[MODEL_GENESIZE];

}

class ModelManager {
public:
	Model evolve (Model parent1, Model parent2);


}
