/*
 * ParallelAgglomerativeClusterer.h
 *
 *  Created on: 30.10.2012
 *      Author: Christian Staudt (christian.staudt@kit.edu), Henning Meyerhenke (henning.meyerhenke@kit.edu)
 */

#ifndef PARALLELAGGLOMERATIVECLUSTERER_H_
#define PARALLELAGGLOMERATIVECLUSTERER_H_

#include "CommunityDetectionAlgorithm.h"

namespace NetworKit {

/**
 * @ingroup community
 * A parallel agglomerative community detection algorithm, maximizing modularity.
 */
class ParallelAgglomerativeClusterer: public NetworKit::CommunityDetectionAlgorithm {

public:

	virtual Partition run(Graph& G);

	virtual std::string toString() const;
};

} /* namespace NetworKit */
#endif /* SCOREMATCHCONTRACT_H_ */