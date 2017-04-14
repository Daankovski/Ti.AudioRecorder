/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/jj/gljblp255bb6mmx7sd8mc6zh0000gn/T/daan/audiorecorder-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/jj/gljblp255bb6mmx7sd8mc6zh0000gn/T/daan/audiorecorder-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.daan.audiorecorder.RecorderProxy.h"
#include "com.daan.audiorecorder.AudiorecorderModule.h"


#line 14 "/private/var/folders/jj/gljblp255bb6mmx7sd8mc6zh0000gn/T/daan/audiorecorder-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 7, duplicates = 0 */

class AudiorecorderBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AudiorecorderBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AudiorecorderBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 36,
      MAX_WORD_LENGTH = 42,
      MIN_HASH_VALUE = 36,
      MAX_HASH_VALUE = 42
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/jj/gljblp255bb6mmx7sd8mc6zh0000gn/T/daan/audiorecorder-generated/KrollGeneratedBindings.gperf"
      {"com.daan.audiorecorder.RecorderProxy", ::com::daan::audiorecorder::audiorecorder::RecorderProxy::bindProxy, ::com::daan::audiorecorder::audiorecorder::RecorderProxy::dispose},
      {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/jj/gljblp255bb6mmx7sd8mc6zh0000gn/T/daan/audiorecorder-generated/KrollGeneratedBindings.gperf"
      {"com.daan.audiorecorder.AudiorecorderModule", ::com::daan::audiorecorder::AudiorecorderModule::bindProxy, ::com::daan::audiorecorder::AudiorecorderModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/jj/gljblp255bb6mmx7sd8mc6zh0000gn/T/daan/audiorecorder-generated/KrollGeneratedBindings.gperf"

