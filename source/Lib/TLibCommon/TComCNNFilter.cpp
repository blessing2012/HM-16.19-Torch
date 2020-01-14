#include "TComCNNFilter.h"

#include "torch/script.h"


TComCNNFilter::TComCNNFilter()
{

}

TComCNNFilter::~TComCNNFilter()
{

}


void TComCNNFilter::destroy()
{

  m_picYUVBLOCKTemp.destroy();

}

void TComCNNFilter::CNNFilterI(TComPic* pcPic)
{

}