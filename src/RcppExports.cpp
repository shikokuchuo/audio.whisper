// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// whisper_load_model
SEXP whisper_load_model(std::string model);
RcppExport SEXP _audio_whisper_whisper_load_model(SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(whisper_load_model(model));
    return rcpp_result_gen;
END_RCPP
}
// whisper_encode
Rcpp::List whisper_encode(SEXP model, std::string path, std::string language, bool token_timestamps, bool translate, bool print_special, int duration, int offset, bool trace, int n_threads, int n_processors);
RcppExport SEXP _audio_whisper_whisper_encode(SEXP modelSEXP, SEXP pathSEXP, SEXP languageSEXP, SEXP token_timestampsSEXP, SEXP translateSEXP, SEXP print_specialSEXP, SEXP durationSEXP, SEXP offsetSEXP, SEXP traceSEXP, SEXP n_threadsSEXP, SEXP n_processorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type language(languageSEXP);
    Rcpp::traits::input_parameter< bool >::type token_timestamps(token_timestampsSEXP);
    Rcpp::traits::input_parameter< bool >::type translate(translateSEXP);
    Rcpp::traits::input_parameter< bool >::type print_special(print_specialSEXP);
    Rcpp::traits::input_parameter< int >::type duration(durationSEXP);
    Rcpp::traits::input_parameter< int >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< int >::type n_processors(n_processorsSEXP);
    rcpp_result_gen = Rcpp::wrap(whisper_encode(model, path, language, token_timestamps, translate, print_special, duration, offset, trace, n_threads, n_processors));
    return rcpp_result_gen;
END_RCPP
}
// whisper_print_benchmark
void whisper_print_benchmark(SEXP model, int n_threads);
RcppExport SEXP _audio_whisper_whisper_print_benchmark(SEXP modelSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    whisper_print_benchmark(model, n_threads);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_audio_whisper_whisper_load_model", (DL_FUNC) &_audio_whisper_whisper_load_model, 1},
    {"_audio_whisper_whisper_encode", (DL_FUNC) &_audio_whisper_whisper_encode, 11},
    {"_audio_whisper_whisper_print_benchmark", (DL_FUNC) &_audio_whisper_whisper_print_benchmark, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_audio_whisper(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
