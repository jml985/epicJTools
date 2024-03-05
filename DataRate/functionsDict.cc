// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME functionsDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "functions.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *vectorlEmaplEunsignedsPlongcOintgRsPgR_Dictionary();
   static void vectorlEmaplEunsignedsPlongcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEmaplEunsignedsPlongcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p);
   static void destruct_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<unsigned long,int> >*)
   {
      vector<map<unsigned long,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<unsigned long,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<unsigned long,int> >", -2, "vector", 423,
                  typeid(vector<map<unsigned long,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEmaplEunsignedsPlongcOintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<map<unsigned long,int> >) );
      instance.SetNew(&new_vectorlEmaplEunsignedsPlongcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEunsignedsPlongcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEunsignedsPlongcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEunsignedsPlongcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEunsignedsPlongcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<unsigned long,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<map<unsigned long,int> >","std::vector<std::map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, int> > >, std::allocator<std::map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, int> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<map<unsigned long,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEunsignedsPlongcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<map<unsigned long,int> >*>(nullptr))->GetClass();
      vectorlEmaplEunsignedsPlongcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEunsignedsPlongcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<map<unsigned long,int> > : new vector<map<unsigned long,int> >;
   }
   static void *newArray_vectorlEmaplEunsignedsPlongcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<map<unsigned long,int> >[nElements] : new vector<map<unsigned long,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p) {
      delete (static_cast<vector<map<unsigned long,int> >*>(p));
   }
   static void deleteArray_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p) {
      delete [] (static_cast<vector<map<unsigned long,int> >*>(p));
   }
   static void destruct_vectorlEmaplEunsignedsPlongcOintgRsPgR(void *p) {
      typedef vector<map<unsigned long,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<map<unsigned long,int> >

namespace ROOT {
   static TClass *maplEunsignedsPlongcOintgR_Dictionary();
   static void maplEunsignedsPlongcOintgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPlongcOintgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPlongcOintgR(Long_t size, void *p);
   static void delete_maplEunsignedsPlongcOintgR(void *p);
   static void deleteArray_maplEunsignedsPlongcOintgR(void *p);
   static void destruct_maplEunsignedsPlongcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned long,int>*)
   {
      map<unsigned long,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned long,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned long,int>", -2, "map", 100,
                  typeid(map<unsigned long,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPlongcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned long,int>) );
      instance.SetNew(&new_maplEunsignedsPlongcOintgR);
      instance.SetNewArray(&newArray_maplEunsignedsPlongcOintgR);
      instance.SetDelete(&delete_maplEunsignedsPlongcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPlongcOintgR);
      instance.SetDestructor(&destruct_maplEunsignedsPlongcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned long,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned long,int>","std::map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned long,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPlongcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned long,int>*>(nullptr))->GetClass();
      maplEunsignedsPlongcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPlongcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPlongcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned long,int> : new map<unsigned long,int>;
   }
   static void *newArray_maplEunsignedsPlongcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned long,int>[nElements] : new map<unsigned long,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPlongcOintgR(void *p) {
      delete (static_cast<map<unsigned long,int>*>(p));
   }
   static void deleteArray_maplEunsignedsPlongcOintgR(void *p) {
      delete [] (static_cast<map<unsigned long,int>*>(p));
   }
   static void destruct_maplEunsignedsPlongcOintgR(void *p) {
      typedef map<unsigned long,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned long,int>

namespace {
  void TriggerDictionaryInitialization_functionsDict_Impl() {
    static const char* headers[] = {
"functions.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-jh5e5oh7vpvuvgeqkvzzsxkg66go55is/include/root",
"/star/u/jml/eic/epicJTools/DataRate/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "functionsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace std{template <typename _Tp = void> struct __attribute__((annotate("$clingAutoload$bits/stl_function.h")))  __attribute__((annotate("$clingAutoload$string")))  less;
}
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "functionsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "functions.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("functionsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_functionsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_functionsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_functionsDict() {
  TriggerDictionaryInitialization_functionsDict_Impl();
}
