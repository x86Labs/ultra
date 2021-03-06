#ifndef ULTRA_REMAP_BASE

#define ULTRA_REMAP_BASE		1

#include "../types.hpp"

class UltraLine;
class UltraConfigBase;
class UltraRequest;

class UltraRemap {
public:
	virtual ~UltraRemap(){}

	virtual void		process(sgxString &resultPattern, const sgxString &source) const = 0;
	virtual bool 		evaluate(sgxString &result, const UltraLine *pLine, const UltraRequest *pRequest) const;
};

#endif
