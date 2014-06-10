#ifndef PULSE_H
#define PULSE_H

#include <TObject.h>

namespace NICE { class Pulse; }

class NICE::Pulse : public TObject
{
   public:
      /**
       * Begin position in the waveform
       */
      int bgn; // begin position in the waveform
      /**
       * End position in the waveform
       */
      int end; // end position in the waveform

      Pulse() : TObject(), bgn(0), end(0) {};
      virtual ~Pulse() {};

      ClassDef(Pulse,1);
};

#endif
