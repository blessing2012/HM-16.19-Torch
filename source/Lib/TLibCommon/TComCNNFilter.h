#include "TComPic.h"

class TComCNNFilter
{
public:

  TComCNNFilter();
  ~TComCNNFilter();

  void destroy();

  void CNNFilterI(TComPic* pcPic);

private:

  TComPicYuv              m_picYUVBLOCKTemp;
};