// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sendWSMessage
void sendWSMessage(std::string conn, bool binary, Rcpp::RObject message);
RcppExport SEXP httpuv_sendWSMessage(SEXP connSEXP, SEXP binarySEXP, SEXP messageSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type conn(connSEXP );
        Rcpp::traits::input_parameter< bool >::type binary(binarySEXP );
        Rcpp::traits::input_parameter< Rcpp::RObject >::type message(messageSEXP );
        sendWSMessage(conn, binary, message);
    }
    return R_NilValue;
END_RCPP
}
// closeWS
void closeWS(std::string conn);
RcppExport SEXP httpuv_closeWS(SEXP connSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type conn(connSEXP );
        closeWS(conn);
    }
    return R_NilValue;
END_RCPP
}
// makeTcpServer
Rcpp::RObject makeTcpServer(const std::string& host, int port, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose);
RcppExport SEXP httpuv_makeTcpServer(SEXP hostSEXP, SEXP portSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type host(hostSEXP );
        Rcpp::traits::input_parameter< int >::type port(portSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onHeaders(onHeadersSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onBodyData(onBodyDataSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onRequest(onRequestSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onWSOpen(onWSOpenSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onWSMessage(onWSMessageSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onWSClose(onWSCloseSEXP );
        Rcpp::RObject __result = makeTcpServer(host, port, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// makePipeServer
Rcpp::RObject makePipeServer(const std::string& name, int mask, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose);
RcppExport SEXP httpuv_makePipeServer(SEXP nameSEXP, SEXP maskSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP );
        Rcpp::traits::input_parameter< int >::type mask(maskSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onHeaders(onHeadersSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onBodyData(onBodyDataSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onRequest(onRequestSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onWSOpen(onWSOpenSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onWSMessage(onWSMessageSEXP );
        Rcpp::traits::input_parameter< Rcpp::Function >::type onWSClose(onWSCloseSEXP );
        Rcpp::RObject __result = makePipeServer(name, mask, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// destroyServer
void destroyServer(std::string handle);
RcppExport SEXP httpuv_destroyServer(SEXP handleSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP );
        destroyServer(handle);
    }
    return R_NilValue;
END_RCPP
}
// run
bool run(uint32_t timeoutMillis);
RcppExport SEXP httpuv_run(SEXP timeoutMillisSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< uint32_t >::type timeoutMillis(timeoutMillisSEXP );
        bool __result = run(timeoutMillis);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// stopLoop
void stopLoop();
RcppExport SEXP httpuv_stopLoop() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        stopLoop();
    }
    return R_NilValue;
END_RCPP
}
// base64encode
std::string base64encode(const Rcpp::RawVector& x);
RcppExport SEXP httpuv_base64encode(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type x(xSEXP );
        std::string __result = base64encode(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
