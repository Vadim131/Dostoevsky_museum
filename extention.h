
#include "GL/glext.h"

inline void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices){
  const static PFNGLDRAWRANGEELEMENTSPROC glfunc = ((PFNGLDRAWRANGEELEMENTSPROC)wglGetProcAddress("glDrawRangeElements"));
  return glfunc ? glfunc(mode, start, end, count, type, indices) : 0;
}

inline void glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels){
  const static PFNGLTEXIMAGE3DPROC glfunc = ((PFNGLTEXIMAGE3DPROC)wglGetProcAddress("glTexImage3D"));
  return glfunc ? glfunc(target, level, internalformat, width, height, depth, border, format, type, pixels) : 0;
}

inline void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels){
  const static PFNGLTEXSUBIMAGE3DPROC glfunc = ((PFNGLTEXSUBIMAGE3DPROC)wglGetProcAddress("glTexSubImage3D"));
  return glfunc ? glfunc(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels) : 0;
}

inline void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){
  const static PFNGLCOPYTEXSUBIMAGE3DPROC glfunc = ((PFNGLCOPYTEXSUBIMAGE3DPROC)wglGetProcAddress("glCopyTexSubImage3D"));
  return glfunc ? glfunc(target, level, xoffset, yoffset, zoffset, x, y, width, height) : 0;
}

inline void glActiveTexture (GLenum texture){
  const static PFNGLACTIVETEXTUREPROC glfunc = ((PFNGLACTIVETEXTUREPROC)wglGetProcAddress("glActiveTexture"));
  return glfunc ? glfunc(texture) : 0;
}

inline void glSampleCoverage (GLfloat value, GLboolean invert){
  const static PFNGLSAMPLECOVERAGEPROC glfunc = ((PFNGLSAMPLECOVERAGEPROC)wglGetProcAddress("glSampleCoverage"));
  return glfunc ? glfunc(value, invert) : 0;
}

inline void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXIMAGE3DPROC glfunc = ((PFNGLCOMPRESSEDTEXIMAGE3DPROC)wglGetProcAddress("glCompressedTexImage3D"));
  return glfunc ? glfunc(target, level, internalformat, width, height, depth, border, imageSize, data) : 0;
}

inline void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXIMAGE2DPROC glfunc = ((PFNGLCOMPRESSEDTEXIMAGE2DPROC)wglGetProcAddress("glCompressedTexImage2D"));
  return glfunc ? glfunc(target, level, internalformat, width, height, border, imageSize, data) : 0;
}

inline void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXIMAGE1DPROC glfunc = ((PFNGLCOMPRESSEDTEXIMAGE1DPROC)wglGetProcAddress("glCompressedTexImage1D"));
  return glfunc ? glfunc(target, level, internalformat, width, border, imageSize, data) : 0;
}

inline void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glfunc = ((PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)wglGetProcAddress("glCompressedTexSubImage3D"));
  return glfunc ? glfunc(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data) : 0;
}

inline void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glfunc = ((PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)wglGetProcAddress("glCompressedTexSubImage2D"));
  return glfunc ? glfunc(target, level, xoffset, yoffset, width, height, format, imageSize, data) : 0;
}

inline void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glfunc = ((PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)wglGetProcAddress("glCompressedTexSubImage1D"));
  return glfunc ? glfunc(target, level, xoffset, width, format, imageSize, data) : 0;
}

inline void glGetCompressedTexImage (GLenum target, GLint level, void *img){
  const static PFNGLGETCOMPRESSEDTEXIMAGEPROC glfunc = ((PFNGLGETCOMPRESSEDTEXIMAGEPROC)wglGetProcAddress("glGetCompressedTexImage"));
  return glfunc ? glfunc(target, level, img) : 0;
}

inline void glClientActiveTexture (GLenum texture){
  const static PFNGLCLIENTACTIVETEXTUREPROC glfunc = ((PFNGLCLIENTACTIVETEXTUREPROC)wglGetProcAddress("glClientActiveTexture"));
  return glfunc ? glfunc(texture) : 0;
}

inline void glMultiTexCoord1d (GLenum target, GLdouble s){
  const static PFNGLMULTITEXCOORD1DPROC glfunc = ((PFNGLMULTITEXCOORD1DPROC)wglGetProcAddress("glMultiTexCoord1d"));
  return glfunc ? glfunc(target, s) : 0;
}

inline void glMultiTexCoord1dv (GLenum target, const GLdouble *v){
  const static PFNGLMULTITEXCOORD1DVPROC glfunc = ((PFNGLMULTITEXCOORD1DVPROC)wglGetProcAddress("glMultiTexCoord1dv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord1f (GLenum target, GLfloat s){
  const static PFNGLMULTITEXCOORD1FPROC glfunc = ((PFNGLMULTITEXCOORD1FPROC)wglGetProcAddress("glMultiTexCoord1f"));
  return glfunc ? glfunc(target, s) : 0;
}

inline void glMultiTexCoord1fv (GLenum target, const GLfloat *v){
  const static PFNGLMULTITEXCOORD1FVPROC glfunc = ((PFNGLMULTITEXCOORD1FVPROC)wglGetProcAddress("glMultiTexCoord1fv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord1i (GLenum target, GLint s){
  const static PFNGLMULTITEXCOORD1IPROC glfunc = ((PFNGLMULTITEXCOORD1IPROC)wglGetProcAddress("glMultiTexCoord1i"));
  return glfunc ? glfunc(target, s) : 0;
}

inline void glMultiTexCoord1iv (GLenum target, const GLint *v){
  const static PFNGLMULTITEXCOORD1IVPROC glfunc = ((PFNGLMULTITEXCOORD1IVPROC)wglGetProcAddress("glMultiTexCoord1iv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord1s (GLenum target, GLshort s){
  const static PFNGLMULTITEXCOORD1SPROC glfunc = ((PFNGLMULTITEXCOORD1SPROC)wglGetProcAddress("glMultiTexCoord1s"));
  return glfunc ? glfunc(target, s) : 0;
}

inline void glMultiTexCoord1sv (GLenum target, const GLshort *v){
  const static PFNGLMULTITEXCOORD1SVPROC glfunc = ((PFNGLMULTITEXCOORD1SVPROC)wglGetProcAddress("glMultiTexCoord1sv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t){
  const static PFNGLMULTITEXCOORD2DPROC glfunc = ((PFNGLMULTITEXCOORD2DPROC)wglGetProcAddress("glMultiTexCoord2d"));
  return glfunc ? glfunc(target, s, t) : 0;
}

inline void glMultiTexCoord2dv (GLenum target, const GLdouble *v){
  const static PFNGLMULTITEXCOORD2DVPROC glfunc = ((PFNGLMULTITEXCOORD2DVPROC)wglGetProcAddress("glMultiTexCoord2dv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t){
  const static PFNGLMULTITEXCOORD2FPROC glfunc = ((PFNGLMULTITEXCOORD2FPROC)wglGetProcAddress("glMultiTexCoord2f"));
  return glfunc ? glfunc(target, s, t) : 0;
}

inline void glMultiTexCoord2fv (GLenum target, const GLfloat *v){
  const static PFNGLMULTITEXCOORD2FVPROC glfunc = ((PFNGLMULTITEXCOORD2FVPROC)wglGetProcAddress("glMultiTexCoord2fv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord2i (GLenum target, GLint s, GLint t){
  const static PFNGLMULTITEXCOORD2IPROC glfunc = ((PFNGLMULTITEXCOORD2IPROC)wglGetProcAddress("glMultiTexCoord2i"));
  return glfunc ? glfunc(target, s, t) : 0;
}

inline void glMultiTexCoord2iv (GLenum target, const GLint *v){
  const static PFNGLMULTITEXCOORD2IVPROC glfunc = ((PFNGLMULTITEXCOORD2IVPROC)wglGetProcAddress("glMultiTexCoord2iv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord2s (GLenum target, GLshort s, GLshort t){
  const static PFNGLMULTITEXCOORD2SPROC glfunc = ((PFNGLMULTITEXCOORD2SPROC)wglGetProcAddress("glMultiTexCoord2s"));
  return glfunc ? glfunc(target, s, t) : 0;
}

inline void glMultiTexCoord2sv (GLenum target, const GLshort *v){
  const static PFNGLMULTITEXCOORD2SVPROC glfunc = ((PFNGLMULTITEXCOORD2SVPROC)wglGetProcAddress("glMultiTexCoord2sv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r){
  const static PFNGLMULTITEXCOORD3DPROC glfunc = ((PFNGLMULTITEXCOORD3DPROC)wglGetProcAddress("glMultiTexCoord3d"));
  return glfunc ? glfunc(target, s, t, r) : 0;
}

inline void glMultiTexCoord3dv (GLenum target, const GLdouble *v){
  const static PFNGLMULTITEXCOORD3DVPROC glfunc = ((PFNGLMULTITEXCOORD3DVPROC)wglGetProcAddress("glMultiTexCoord3dv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r){
  const static PFNGLMULTITEXCOORD3FPROC glfunc = ((PFNGLMULTITEXCOORD3FPROC)wglGetProcAddress("glMultiTexCoord3f"));
  return glfunc ? glfunc(target, s, t, r) : 0;
}

inline void glMultiTexCoord3fv (GLenum target, const GLfloat *v){
  const static PFNGLMULTITEXCOORD3FVPROC glfunc = ((PFNGLMULTITEXCOORD3FVPROC)wglGetProcAddress("glMultiTexCoord3fv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r){
  const static PFNGLMULTITEXCOORD3IPROC glfunc = ((PFNGLMULTITEXCOORD3IPROC)wglGetProcAddress("glMultiTexCoord3i"));
  return glfunc ? glfunc(target, s, t, r) : 0;
}

inline void glMultiTexCoord3iv (GLenum target, const GLint *v){
  const static PFNGLMULTITEXCOORD3IVPROC glfunc = ((PFNGLMULTITEXCOORD3IVPROC)wglGetProcAddress("glMultiTexCoord3iv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r){
  const static PFNGLMULTITEXCOORD3SPROC glfunc = ((PFNGLMULTITEXCOORD3SPROC)wglGetProcAddress("glMultiTexCoord3s"));
  return glfunc ? glfunc(target, s, t, r) : 0;
}

inline void glMultiTexCoord3sv (GLenum target, const GLshort *v){
  const static PFNGLMULTITEXCOORD3SVPROC glfunc = ((PFNGLMULTITEXCOORD3SVPROC)wglGetProcAddress("glMultiTexCoord3sv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q){
  const static PFNGLMULTITEXCOORD4DPROC glfunc = ((PFNGLMULTITEXCOORD4DPROC)wglGetProcAddress("glMultiTexCoord4d"));
  return glfunc ? glfunc(target, s, t, r, q) : 0;
}

inline void glMultiTexCoord4dv (GLenum target, const GLdouble *v){
  const static PFNGLMULTITEXCOORD4DVPROC glfunc = ((PFNGLMULTITEXCOORD4DVPROC)wglGetProcAddress("glMultiTexCoord4dv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q){
  const static PFNGLMULTITEXCOORD4FPROC glfunc = ((PFNGLMULTITEXCOORD4FPROC)wglGetProcAddress("glMultiTexCoord4f"));
  return glfunc ? glfunc(target, s, t, r, q) : 0;
}

inline void glMultiTexCoord4fv (GLenum target, const GLfloat *v){
  const static PFNGLMULTITEXCOORD4FVPROC glfunc = ((PFNGLMULTITEXCOORD4FVPROC)wglGetProcAddress("glMultiTexCoord4fv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q){
  const static PFNGLMULTITEXCOORD4IPROC glfunc = ((PFNGLMULTITEXCOORD4IPROC)wglGetProcAddress("glMultiTexCoord4i"));
  return glfunc ? glfunc(target, s, t, r, q) : 0;
}

inline void glMultiTexCoord4iv (GLenum target, const GLint *v){
  const static PFNGLMULTITEXCOORD4IVPROC glfunc = ((PFNGLMULTITEXCOORD4IVPROC)wglGetProcAddress("glMultiTexCoord4iv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q){
  const static PFNGLMULTITEXCOORD4SPROC glfunc = ((PFNGLMULTITEXCOORD4SPROC)wglGetProcAddress("glMultiTexCoord4s"));
  return glfunc ? glfunc(target, s, t, r, q) : 0;
}

inline void glMultiTexCoord4sv (GLenum target, const GLshort *v){
  const static PFNGLMULTITEXCOORD4SVPROC glfunc = ((PFNGLMULTITEXCOORD4SVPROC)wglGetProcAddress("glMultiTexCoord4sv"));
  return glfunc ? glfunc(target, v) : 0;
}

inline void glLoadTransposeMatrixf (const GLfloat *m){
  const static PFNGLLOADTRANSPOSEMATRIXFPROC glfunc = ((PFNGLLOADTRANSPOSEMATRIXFPROC)wglGetProcAddress("glLoadTransposeMatrixf"));
  return glfunc ? glfunc(m) : 0;
}

inline void glLoadTransposeMatrixd (const GLdouble *m){
  const static PFNGLLOADTRANSPOSEMATRIXDPROC glfunc = ((PFNGLLOADTRANSPOSEMATRIXDPROC)wglGetProcAddress("glLoadTransposeMatrixd"));
  return glfunc ? glfunc(m) : 0;
}

inline void glMultTransposeMatrixf (const GLfloat *m){
  const static PFNGLMULTTRANSPOSEMATRIXFPROC glfunc = ((PFNGLMULTTRANSPOSEMATRIXFPROC)wglGetProcAddress("glMultTransposeMatrixf"));
  return glfunc ? glfunc(m) : 0;
}

inline void glMultTransposeMatrixd (const GLdouble *m){
  const static PFNGLMULTTRANSPOSEMATRIXDPROC glfunc = ((PFNGLMULTTRANSPOSEMATRIXDPROC)wglGetProcAddress("glMultTransposeMatrixd"));
  return glfunc ? glfunc(m) : 0;
}

inline void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha){
  const static PFNGLBLENDFUNCSEPARATEPROC glfunc = ((PFNGLBLENDFUNCSEPARATEPROC)wglGetProcAddress("glBlendFuncSeparate"));
  return glfunc ? glfunc(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha) : 0;
}

inline void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount){
  const static PFNGLMULTIDRAWARRAYSPROC glfunc = ((PFNGLMULTIDRAWARRAYSPROC)wglGetProcAddress("glMultiDrawArrays"));
  return glfunc ? glfunc(mode, first, count, drawcount) : 0;
}

inline void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount){
  const static PFNGLMULTIDRAWELEMENTSPROC glfunc = ((PFNGLMULTIDRAWELEMENTSPROC)wglGetProcAddress("glMultiDrawElements"));
  return glfunc ? glfunc(mode, count, type, indices, drawcount) : 0;
}

inline void glPointParameterf (GLenum pname, GLfloat param){
  const static PFNGLPOINTPARAMETERFPROC glfunc = ((PFNGLPOINTPARAMETERFPROC)wglGetProcAddress("glPointParameterf"));
  return glfunc ? glfunc(pname, param) : 0;
}

inline void glPointParameterfv (GLenum pname, const GLfloat *params){
  const static PFNGLPOINTPARAMETERFVPROC glfunc = ((PFNGLPOINTPARAMETERFVPROC)wglGetProcAddress("glPointParameterfv"));
  return glfunc ? glfunc(pname, params) : 0;
}

inline void glPointParameteri (GLenum pname, GLint param){
  const static PFNGLPOINTPARAMETERIPROC glfunc = ((PFNGLPOINTPARAMETERIPROC)wglGetProcAddress("glPointParameteri"));
  return glfunc ? glfunc(pname, param) : 0;
}

inline void glPointParameteriv (GLenum pname, const GLint *params){
  const static PFNGLPOINTPARAMETERIVPROC glfunc = ((PFNGLPOINTPARAMETERIVPROC)wglGetProcAddress("glPointParameteriv"));
  return glfunc ? glfunc(pname, params) : 0;
}

inline void glFogCoordf (GLfloat coord){
  const static PFNGLFOGCOORDFPROC glfunc = ((PFNGLFOGCOORDFPROC)wglGetProcAddress("glFogCoordf"));
  return glfunc ? glfunc(coord) : 0;
}

inline void glFogCoordfv (const GLfloat *coord){
  const static PFNGLFOGCOORDFVPROC glfunc = ((PFNGLFOGCOORDFVPROC)wglGetProcAddress("glFogCoordfv"));
  return glfunc ? glfunc(coord) : 0;
}

inline void glFogCoordd (GLdouble coord){
  const static PFNGLFOGCOORDDPROC glfunc = ((PFNGLFOGCOORDDPROC)wglGetProcAddress("glFogCoordd"));
  return glfunc ? glfunc(coord) : 0;
}

inline void glFogCoorddv (const GLdouble *coord){
  const static PFNGLFOGCOORDDVPROC glfunc = ((PFNGLFOGCOORDDVPROC)wglGetProcAddress("glFogCoorddv"));
  return glfunc ? glfunc(coord) : 0;
}

inline void glFogCoordPointer (GLenum type, GLsizei stride, const void *pointer){
  const static PFNGLFOGCOORDPOINTERPROC glfunc = ((PFNGLFOGCOORDPOINTERPROC)wglGetProcAddress("glFogCoordPointer"));
  return glfunc ? glfunc(type, stride, pointer) : 0;
}

inline void glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue){
  const static PFNGLSECONDARYCOLOR3BPROC glfunc = ((PFNGLSECONDARYCOLOR3BPROC)wglGetProcAddress("glSecondaryColor3b"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3bv (const GLbyte *v){
  const static PFNGLSECONDARYCOLOR3BVPROC glfunc = ((PFNGLSECONDARYCOLOR3BVPROC)wglGetProcAddress("glSecondaryColor3bv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue){
  const static PFNGLSECONDARYCOLOR3DPROC glfunc = ((PFNGLSECONDARYCOLOR3DPROC)wglGetProcAddress("glSecondaryColor3d"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3dv (const GLdouble *v){
  const static PFNGLSECONDARYCOLOR3DVPROC glfunc = ((PFNGLSECONDARYCOLOR3DVPROC)wglGetProcAddress("glSecondaryColor3dv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue){
  const static PFNGLSECONDARYCOLOR3FPROC glfunc = ((PFNGLSECONDARYCOLOR3FPROC)wglGetProcAddress("glSecondaryColor3f"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3fv (const GLfloat *v){
  const static PFNGLSECONDARYCOLOR3FVPROC glfunc = ((PFNGLSECONDARYCOLOR3FVPROC)wglGetProcAddress("glSecondaryColor3fv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColor3i (GLint red, GLint green, GLint blue){
  const static PFNGLSECONDARYCOLOR3IPROC glfunc = ((PFNGLSECONDARYCOLOR3IPROC)wglGetProcAddress("glSecondaryColor3i"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3iv (const GLint *v){
  const static PFNGLSECONDARYCOLOR3IVPROC glfunc = ((PFNGLSECONDARYCOLOR3IVPROC)wglGetProcAddress("glSecondaryColor3iv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColor3s (GLshort red, GLshort green, GLshort blue){
  const static PFNGLSECONDARYCOLOR3SPROC glfunc = ((PFNGLSECONDARYCOLOR3SPROC)wglGetProcAddress("glSecondaryColor3s"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3sv (const GLshort *v){
  const static PFNGLSECONDARYCOLOR3SVPROC glfunc = ((PFNGLSECONDARYCOLOR3SVPROC)wglGetProcAddress("glSecondaryColor3sv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue){
  const static PFNGLSECONDARYCOLOR3UBPROC glfunc = ((PFNGLSECONDARYCOLOR3UBPROC)wglGetProcAddress("glSecondaryColor3ub"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3ubv (const GLubyte *v){
  const static PFNGLSECONDARYCOLOR3UBVPROC glfunc = ((PFNGLSECONDARYCOLOR3UBVPROC)wglGetProcAddress("glSecondaryColor3ubv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue){
  const static PFNGLSECONDARYCOLOR3UIPROC glfunc = ((PFNGLSECONDARYCOLOR3UIPROC)wglGetProcAddress("glSecondaryColor3ui"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3uiv (const GLuint *v){
  const static PFNGLSECONDARYCOLOR3UIVPROC glfunc = ((PFNGLSECONDARYCOLOR3UIVPROC)wglGetProcAddress("glSecondaryColor3uiv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColor3us (GLushort red, GLushort green, GLushort blue){
  const static PFNGLSECONDARYCOLOR3USPROC glfunc = ((PFNGLSECONDARYCOLOR3USPROC)wglGetProcAddress("glSecondaryColor3us"));
  return glfunc ? glfunc(red, green, blue) : 0;
}

inline void glSecondaryColor3usv (const GLushort *v){
  const static PFNGLSECONDARYCOLOR3USVPROC glfunc = ((PFNGLSECONDARYCOLOR3USVPROC)wglGetProcAddress("glSecondaryColor3usv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const void *pointer){
  const static PFNGLSECONDARYCOLORPOINTERPROC glfunc = ((PFNGLSECONDARYCOLORPOINTERPROC)wglGetProcAddress("glSecondaryColorPointer"));
  return glfunc ? glfunc(size, type, stride, pointer) : 0;
}

inline void glWindowPos2d (GLdouble x, GLdouble y){
  const static PFNGLWINDOWPOS2DPROC glfunc = ((PFNGLWINDOWPOS2DPROC)wglGetProcAddress("glWindowPos2d"));
  return glfunc ? glfunc(x, y) : 0;
}

inline void glWindowPos2dv (const GLdouble *v){
  const static PFNGLWINDOWPOS2DVPROC glfunc = ((PFNGLWINDOWPOS2DVPROC)wglGetProcAddress("glWindowPos2dv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glWindowPos2f (GLfloat x, GLfloat y){
  const static PFNGLWINDOWPOS2FPROC glfunc = ((PFNGLWINDOWPOS2FPROC)wglGetProcAddress("glWindowPos2f"));
  return glfunc ? glfunc(x, y) : 0;
}

inline void glWindowPos2fv (const GLfloat *v){
  const static PFNGLWINDOWPOS2FVPROC glfunc = ((PFNGLWINDOWPOS2FVPROC)wglGetProcAddress("glWindowPos2fv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glWindowPos2i (GLint x, GLint y){
  const static PFNGLWINDOWPOS2IPROC glfunc = ((PFNGLWINDOWPOS2IPROC)wglGetProcAddress("glWindowPos2i"));
  return glfunc ? glfunc(x, y) : 0;
}

inline void glWindowPos2iv (const GLint *v){
  const static PFNGLWINDOWPOS2IVPROC glfunc = ((PFNGLWINDOWPOS2IVPROC)wglGetProcAddress("glWindowPos2iv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glWindowPos2s (GLshort x, GLshort y){
  const static PFNGLWINDOWPOS2SPROC glfunc = ((PFNGLWINDOWPOS2SPROC)wglGetProcAddress("glWindowPos2s"));
  return glfunc ? glfunc(x, y) : 0;
}

inline void glWindowPos2sv (const GLshort *v){
  const static PFNGLWINDOWPOS2SVPROC glfunc = ((PFNGLWINDOWPOS2SVPROC)wglGetProcAddress("glWindowPos2sv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glWindowPos3d (GLdouble x, GLdouble y, GLdouble z){
  const static PFNGLWINDOWPOS3DPROC glfunc = ((PFNGLWINDOWPOS3DPROC)wglGetProcAddress("glWindowPos3d"));
  return glfunc ? glfunc(x, y, z) : 0;
}

inline void glWindowPos3dv (const GLdouble *v){
  const static PFNGLWINDOWPOS3DVPROC glfunc = ((PFNGLWINDOWPOS3DVPROC)wglGetProcAddress("glWindowPos3dv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glWindowPos3f (GLfloat x, GLfloat y, GLfloat z){
  const static PFNGLWINDOWPOS3FPROC glfunc = ((PFNGLWINDOWPOS3FPROC)wglGetProcAddress("glWindowPos3f"));
  return glfunc ? glfunc(x, y, z) : 0;
}

inline void glWindowPos3fv (const GLfloat *v){
  const static PFNGLWINDOWPOS3FVPROC glfunc = ((PFNGLWINDOWPOS3FVPROC)wglGetProcAddress("glWindowPos3fv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glWindowPos3i (GLint x, GLint y, GLint z){
  const static PFNGLWINDOWPOS3IPROC glfunc = ((PFNGLWINDOWPOS3IPROC)wglGetProcAddress("glWindowPos3i"));
  return glfunc ? glfunc(x, y, z) : 0;
}

inline void glWindowPos3iv (const GLint *v){
  const static PFNGLWINDOWPOS3IVPROC glfunc = ((PFNGLWINDOWPOS3IVPROC)wglGetProcAddress("glWindowPos3iv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glWindowPos3s (GLshort x, GLshort y, GLshort z){
  const static PFNGLWINDOWPOS3SPROC glfunc = ((PFNGLWINDOWPOS3SPROC)wglGetProcAddress("glWindowPos3s"));
  return glfunc ? glfunc(x, y, z) : 0;
}

inline void glWindowPos3sv (const GLshort *v){
  const static PFNGLWINDOWPOS3SVPROC glfunc = ((PFNGLWINDOWPOS3SVPROC)wglGetProcAddress("glWindowPos3sv"));
  return glfunc ? glfunc(v) : 0;
}

inline void glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){
  const static PFNGLBLENDCOLORPROC glfunc = ((PFNGLBLENDCOLORPROC)wglGetProcAddress("glBlendColor"));
  return glfunc ? glfunc(red, green, blue, alpha) : 0;
}

inline void glBlendEquation (GLenum mode){
  const static PFNGLBLENDEQUATIONPROC glfunc = ((PFNGLBLENDEQUATIONPROC)wglGetProcAddress("glBlendEquation"));
  return glfunc ? glfunc(mode) : 0;
}

inline void glGenQueries (GLsizei n, GLuint *ids){
  const static PFNGLGENQUERIESPROC glfunc = ((PFNGLGENQUERIESPROC)wglGetProcAddress("glGenQueries"));
  return glfunc ? glfunc(n, ids) : 0;
}

inline void glDeleteQueries (GLsizei n, const GLuint *ids){
  const static PFNGLDELETEQUERIESPROC glfunc = ((PFNGLDELETEQUERIESPROC)wglGetProcAddress("glDeleteQueries"));
  return glfunc ? glfunc(n, ids) : 0;
}

inline GLboolean glIsQuery (GLuint id){
  const static PFNGLISQUERYPROC glfunc = ((PFNGLISQUERYPROC)wglGetProcAddress("glIsQuery"));
  return glfunc ? glfunc(id) : 0;
}

inline void glBeginQuery (GLenum target, GLuint id){
  const static PFNGLBEGINQUERYPROC glfunc = ((PFNGLBEGINQUERYPROC)wglGetProcAddress("glBeginQuery"));
  return glfunc ? glfunc(target, id) : 0;
}

inline void glEndQuery (GLenum target){
  const static PFNGLENDQUERYPROC glfunc = ((PFNGLENDQUERYPROC)wglGetProcAddress("glEndQuery"));
  return glfunc ? glfunc(target) : 0;
}

inline void glGetQueryiv (GLenum target, GLenum pname, GLint *params){
  const static PFNGLGETQUERYIVPROC glfunc = ((PFNGLGETQUERYIVPROC)wglGetProcAddress("glGetQueryiv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params){
  const static PFNGLGETQUERYOBJECTIVPROC glfunc = ((PFNGLGETQUERYOBJECTIVPROC)wglGetProcAddress("glGetQueryObjectiv"));
  return glfunc ? glfunc(id, pname, params) : 0;
}

inline void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params){
  const static PFNGLGETQUERYOBJECTUIVPROC glfunc = ((PFNGLGETQUERYOBJECTUIVPROC)wglGetProcAddress("glGetQueryObjectuiv"));
  return glfunc ? glfunc(id, pname, params) : 0;
}

inline void glBindBuffer (GLenum target, GLuint buffer){
  const static PFNGLBINDBUFFERPROC glfunc = ((PFNGLBINDBUFFERPROC)wglGetProcAddress("glBindBuffer"));
  return glfunc ? glfunc(target, buffer) : 0;
}

inline void glDeleteBuffers (GLsizei n, const GLuint *buffers){
  const static PFNGLDELETEBUFFERSPROC glfunc = ((PFNGLDELETEBUFFERSPROC)wglGetProcAddress("glDeleteBuffers"));
  return glfunc ? glfunc(n, buffers) : 0;
}

inline void glGenBuffers (GLsizei n, GLuint *buffers){
  const static PFNGLGENBUFFERSPROC glfunc = ((PFNGLGENBUFFERSPROC)wglGetProcAddress("glGenBuffers"));
  return glfunc ? glfunc(n, buffers) : 0;
}

inline GLboolean glIsBuffer (GLuint buffer){
  const static PFNGLISBUFFERPROC glfunc = ((PFNGLISBUFFERPROC)wglGetProcAddress("glIsBuffer"));
  return glfunc ? glfunc(buffer) : 0;
}

inline void glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage){
  const static PFNGLBUFFERDATAPROC glfunc = ((PFNGLBUFFERDATAPROC)wglGetProcAddress("glBufferData"));
  return glfunc ? glfunc(target, size, data, usage) : 0;
}

inline void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data){
  const static PFNGLBUFFERSUBDATAPROC glfunc = ((PFNGLBUFFERSUBDATAPROC)wglGetProcAddress("glBufferSubData"));
  return glfunc ? glfunc(target, offset, size, data) : 0;
}

inline void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void *data){
  const static PFNGLGETBUFFERSUBDATAPROC glfunc = ((PFNGLGETBUFFERSUBDATAPROC)wglGetProcAddress("glGetBufferSubData"));
  return glfunc ? glfunc(target, offset, size, data) : 0;
}

inline void *glMapBuffer (GLenum target, GLenum access){
  const static PFNGLMAPBUFFERPROC glfunc = ((PFNGLMAPBUFFERPROC)wglGetProcAddress("glMapBuffer"));
  return glfunc ? glfunc(target, access) : 0;
}

inline GLboolean glUnmapBuffer (GLenum target){
  const static PFNGLUNMAPBUFFERPROC glfunc = ((PFNGLUNMAPBUFFERPROC)wglGetProcAddress("glUnmapBuffer"));
  return glfunc ? glfunc(target) : 0;
}

inline void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params){
  const static PFNGLGETBUFFERPARAMETERIVPROC glfunc = ((PFNGLGETBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetBufferParameteriv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glGetBufferPointerv (GLenum target, GLenum pname, void **params){
  const static PFNGLGETBUFFERPOINTERVPROC glfunc = ((PFNGLGETBUFFERPOINTERVPROC)wglGetProcAddress("glGetBufferPointerv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha){
  const static PFNGLBLENDEQUATIONSEPARATEPROC glfunc = ((PFNGLBLENDEQUATIONSEPARATEPROC)wglGetProcAddress("glBlendEquationSeparate"));
  return glfunc ? glfunc(modeRGB, modeAlpha) : 0;
}

inline void glDrawBuffers (GLsizei n, const GLenum *bufs){
  const static PFNGLDRAWBUFFERSPROC glfunc = ((PFNGLDRAWBUFFERSPROC)wglGetProcAddress("glDrawBuffers"));
  return glfunc ? glfunc(n, bufs) : 0;
}

inline void glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass){
  const static PFNGLSTENCILOPSEPARATEPROC glfunc = ((PFNGLSTENCILOPSEPARATEPROC)wglGetProcAddress("glStencilOpSeparate"));
  return glfunc ? glfunc(face, sfail, dpfail, dppass) : 0;
}

inline void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask){
  const static PFNGLSTENCILFUNCSEPARATEPROC glfunc = ((PFNGLSTENCILFUNCSEPARATEPROC)wglGetProcAddress("glStencilFuncSeparate"));
  return glfunc ? glfunc(face, func, ref, mask) : 0;
}

inline void glStencilMaskSeparate (GLenum face, GLuint mask){
  const static PFNGLSTENCILMASKSEPARATEPROC glfunc = ((PFNGLSTENCILMASKSEPARATEPROC)wglGetProcAddress("glStencilMaskSeparate"));
  return glfunc ? glfunc(face, mask) : 0;
}

inline void glAttachShader (GLuint program, GLuint shader){
  const static PFNGLATTACHSHADERPROC glfunc = ((PFNGLATTACHSHADERPROC)wglGetProcAddress("glAttachShader"));
  return glfunc ? glfunc(program, shader) : 0;
}

inline void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name){
  const static PFNGLBINDATTRIBLOCATIONPROC glfunc = ((PFNGLBINDATTRIBLOCATIONPROC)wglGetProcAddress("glBindAttribLocation"));
  return glfunc ? glfunc(program, index, name) : 0;
}

inline void glCompileShader (GLuint shader){
  const static PFNGLCOMPILESHADERPROC glfunc = ((PFNGLCOMPILESHADERPROC)wglGetProcAddress("glCompileShader"));
  return glfunc ? glfunc(shader) : 0;
}

inline GLuint glCreateProgram (void){
  const static PFNGLCREATEPROGRAMPROC glfunc = ((PFNGLCREATEPROGRAMPROC)wglGetProcAddress("glCreateProgram"));
  return glfunc ? glfunc() : 0;
}

inline GLuint glCreateShader (GLenum type){
  const static PFNGLCREATESHADERPROC glfunc = ((PFNGLCREATESHADERPROC)wglGetProcAddress("glCreateShader"));
  return glfunc ? glfunc(type) : 0;
}

inline void glDeleteProgram (GLuint program){
  const static PFNGLDELETEPROGRAMPROC glfunc = ((PFNGLDELETEPROGRAMPROC)wglGetProcAddress("glDeleteProgram"));
  return glfunc ? glfunc(program) : 0;
}

inline void glDeleteShader (GLuint shader){
  const static PFNGLDELETESHADERPROC glfunc = ((PFNGLDELETESHADERPROC)wglGetProcAddress("glDeleteShader"));
  return glfunc ? glfunc(shader) : 0;
}

inline void glDetachShader (GLuint program, GLuint shader){
  const static PFNGLDETACHSHADERPROC glfunc = ((PFNGLDETACHSHADERPROC)wglGetProcAddress("glDetachShader"));
  return glfunc ? glfunc(program, shader) : 0;
}

inline void glDisableVertexAttribArray (GLuint index){
  const static PFNGLDISABLEVERTEXATTRIBARRAYPROC glfunc = ((PFNGLDISABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glDisableVertexAttribArray"));
  return glfunc ? glfunc(index) : 0;
}

inline void glEnableVertexAttribArray (GLuint index){
  const static PFNGLENABLEVERTEXATTRIBARRAYPROC glfunc = ((PFNGLENABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glEnableVertexAttribArray"));
  return glfunc ? glfunc(index) : 0;
}

inline void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name){
  const static PFNGLGETACTIVEATTRIBPROC glfunc = ((PFNGLGETACTIVEATTRIBPROC)wglGetProcAddress("glGetActiveAttrib"));
  return glfunc ? glfunc(program, index, bufSize, length, size, type, name) : 0;
}

inline void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name){
  const static PFNGLGETACTIVEUNIFORMPROC glfunc = ((PFNGLGETACTIVEUNIFORMPROC)wglGetProcAddress("glGetActiveUniform"));
  return glfunc ? glfunc(program, index, bufSize, length, size, type, name) : 0;
}

inline void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders){
  const static PFNGLGETATTACHEDSHADERSPROC glfunc = ((PFNGLGETATTACHEDSHADERSPROC)wglGetProcAddress("glGetAttachedShaders"));
  return glfunc ? glfunc(program, maxCount, count, shaders) : 0;
}

inline GLint glGetAttribLocation (GLuint program, const GLchar *name){
  const static PFNGLGETATTRIBLOCATIONPROC glfunc = ((PFNGLGETATTRIBLOCATIONPROC)wglGetProcAddress("glGetAttribLocation"));
  return glfunc ? glfunc(program, name) : 0;
}

inline void glGetProgramiv (GLuint program, GLenum pname, GLint *params){
  const static PFNGLGETPROGRAMIVPROC glfunc = ((PFNGLGETPROGRAMIVPROC)wglGetProcAddress("glGetProgramiv"));
  return glfunc ? glfunc(program, pname, params) : 0;
}

inline void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog){
  const static PFNGLGETPROGRAMINFOLOGPROC glfunc = ((PFNGLGETPROGRAMINFOLOGPROC)wglGetProcAddress("glGetProgramInfoLog"));
  return glfunc ? glfunc(program, bufSize, length, infoLog) : 0;
}

inline void glGetShaderiv (GLuint shader, GLenum pname, GLint *params){
  const static PFNGLGETSHADERIVPROC glfunc = ((PFNGLGETSHADERIVPROC)wglGetProcAddress("glGetShaderiv"));
  return glfunc ? glfunc(shader, pname, params) : 0;
}

inline void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog){
  const static PFNGLGETSHADERINFOLOGPROC glfunc = ((PFNGLGETSHADERINFOLOGPROC)wglGetProcAddress("glGetShaderInfoLog"));
  return glfunc ? glfunc(shader, bufSize, length, infoLog) : 0;
}

inline void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source){
  const static PFNGLGETSHADERSOURCEPROC glfunc = ((PFNGLGETSHADERSOURCEPROC)wglGetProcAddress("glGetShaderSource"));
  return glfunc ? glfunc(shader, bufSize, length, source) : 0;
}

inline GLint glGetUniformLocation (GLuint program, const GLchar *name){
  const static PFNGLGETUNIFORMLOCATIONPROC glfunc = ((PFNGLGETUNIFORMLOCATIONPROC)wglGetProcAddress("glGetUniformLocation"));
  return glfunc ? glfunc(program, name) : 0;
}

inline void glGetUniformfv (GLuint program, GLint location, GLfloat *params){
  const static PFNGLGETUNIFORMFVPROC glfunc = ((PFNGLGETUNIFORMFVPROC)wglGetProcAddress("glGetUniformfv"));
  return glfunc ? glfunc(program, location, params) : 0;
}

inline void glGetUniformiv (GLuint program, GLint location, GLint *params){
  const static PFNGLGETUNIFORMIVPROC glfunc = ((PFNGLGETUNIFORMIVPROC)wglGetProcAddress("glGetUniformiv"));
  return glfunc ? glfunc(program, location, params) : 0;
}

inline void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params){
  const static PFNGLGETVERTEXATTRIBDVPROC glfunc = ((PFNGLGETVERTEXATTRIBDVPROC)wglGetProcAddress("glGetVertexAttribdv"));
  return glfunc ? glfunc(index, pname, params) : 0;
}

inline void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params){
  const static PFNGLGETVERTEXATTRIBFVPROC glfunc = ((PFNGLGETVERTEXATTRIBFVPROC)wglGetProcAddress("glGetVertexAttribfv"));
  return glfunc ? glfunc(index, pname, params) : 0;
}

inline void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params){
  const static PFNGLGETVERTEXATTRIBIVPROC glfunc = ((PFNGLGETVERTEXATTRIBIVPROC)wglGetProcAddress("glGetVertexAttribiv"));
  return glfunc ? glfunc(index, pname, params) : 0;
}

inline void glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer){
  const static PFNGLGETVERTEXATTRIBPOINTERVPROC glfunc = ((PFNGLGETVERTEXATTRIBPOINTERVPROC)wglGetProcAddress("glGetVertexAttribPointerv"));
  return glfunc ? glfunc(index, pname, pointer) : 0;
}

inline GLboolean glIsProgram (GLuint program){
  const static PFNGLISPROGRAMPROC glfunc = ((PFNGLISPROGRAMPROC)wglGetProcAddress("glIsProgram"));
  return glfunc ? glfunc(program) : 0;
}

inline GLboolean glIsShader (GLuint shader){
  const static PFNGLISSHADERPROC glfunc = ((PFNGLISSHADERPROC)wglGetProcAddress("glIsShader"));
  return glfunc ? glfunc(shader) : 0;
}

inline void glLinkProgram (GLuint program){
  const static PFNGLLINKPROGRAMPROC glfunc = ((PFNGLLINKPROGRAMPROC)wglGetProcAddress("glLinkProgram"));
  return glfunc ? glfunc(program) : 0;
}

inline void glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length){
  const static PFNGLSHADERSOURCEPROC glfunc = ((PFNGLSHADERSOURCEPROC)wglGetProcAddress("glShaderSource"));
  return glfunc ? glfunc(shader, count, string, length) : 0;
}

inline void glUseProgram (GLuint program){
  const static PFNGLUSEPROGRAMPROC glfunc = ((PFNGLUSEPROGRAMPROC)wglGetProcAddress("glUseProgram"));
  return glfunc ? glfunc(program) : 0;
}

inline void glUniform1f (GLint location, GLfloat v0){
  const static PFNGLUNIFORM1FPROC glfunc = ((PFNGLUNIFORM1FPROC)wglGetProcAddress("glUniform1f"));
  return glfunc ? glfunc(location, v0) : 0;
}

inline void glUniform2f (GLint location, GLfloat v0, GLfloat v1){
  const static PFNGLUNIFORM2FPROC glfunc = ((PFNGLUNIFORM2FPROC)wglGetProcAddress("glUniform2f"));
  return glfunc ? glfunc(location, v0, v1) : 0;
}

inline void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2){
  const static PFNGLUNIFORM3FPROC glfunc = ((PFNGLUNIFORM3FPROC)wglGetProcAddress("glUniform3f"));
  return glfunc ? glfunc(location, v0, v1, v2) : 0;
}

inline void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){
  const static PFNGLUNIFORM4FPROC glfunc = ((PFNGLUNIFORM4FPROC)wglGetProcAddress("glUniform4f"));
  return glfunc ? glfunc(location, v0, v1, v2, v3) : 0;
}

inline void glUniform1i (GLint location, GLint v0){
  const static PFNGLUNIFORM1IPROC glfunc = ((PFNGLUNIFORM1IPROC)wglGetProcAddress("glUniform1i"));
  return glfunc ? glfunc(location, v0) : 0;
}

inline void glUniform2i (GLint location, GLint v0, GLint v1){
  const static PFNGLUNIFORM2IPROC glfunc = ((PFNGLUNIFORM2IPROC)wglGetProcAddress("glUniform2i"));
  return glfunc ? glfunc(location, v0, v1) : 0;
}

inline void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2){
  const static PFNGLUNIFORM3IPROC glfunc = ((PFNGLUNIFORM3IPROC)wglGetProcAddress("glUniform3i"));
  return glfunc ? glfunc(location, v0, v1, v2) : 0;
}

inline void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3){
  const static PFNGLUNIFORM4IPROC glfunc = ((PFNGLUNIFORM4IPROC)wglGetProcAddress("glUniform4i"));
  return glfunc ? glfunc(location, v0, v1, v2, v3) : 0;
}

inline void glUniform1fv (GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLUNIFORM1FVPROC glfunc = ((PFNGLUNIFORM1FVPROC)wglGetProcAddress("glUniform1fv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform2fv (GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLUNIFORM2FVPROC glfunc = ((PFNGLUNIFORM2FVPROC)wglGetProcAddress("glUniform2fv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform3fv (GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLUNIFORM3FVPROC glfunc = ((PFNGLUNIFORM3FVPROC)wglGetProcAddress("glUniform3fv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform4fv (GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLUNIFORM4FVPROC glfunc = ((PFNGLUNIFORM4FVPROC)wglGetProcAddress("glUniform4fv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform1iv (GLint location, GLsizei count, const GLint *value){
  const static PFNGLUNIFORM1IVPROC glfunc = ((PFNGLUNIFORM1IVPROC)wglGetProcAddress("glUniform1iv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform2iv (GLint location, GLsizei count, const GLint *value){
  const static PFNGLUNIFORM2IVPROC glfunc = ((PFNGLUNIFORM2IVPROC)wglGetProcAddress("glUniform2iv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform3iv (GLint location, GLsizei count, const GLint *value){
  const static PFNGLUNIFORM3IVPROC glfunc = ((PFNGLUNIFORM3IVPROC)wglGetProcAddress("glUniform3iv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform4iv (GLint location, GLsizei count, const GLint *value){
  const static PFNGLUNIFORM4IVPROC glfunc = ((PFNGLUNIFORM4IVPROC)wglGetProcAddress("glUniform4iv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX2FVPROC glfunc = ((PFNGLUNIFORMMATRIX2FVPROC)wglGetProcAddress("glUniformMatrix2fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX3FVPROC glfunc = ((PFNGLUNIFORMMATRIX3FVPROC)wglGetProcAddress("glUniformMatrix3fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX4FVPROC glfunc = ((PFNGLUNIFORMMATRIX4FVPROC)wglGetProcAddress("glUniformMatrix4fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glValidateProgram (GLuint program){
  const static PFNGLVALIDATEPROGRAMPROC glfunc = ((PFNGLVALIDATEPROGRAMPROC)wglGetProcAddress("glValidateProgram"));
  return glfunc ? glfunc(program) : 0;
}

inline void glVertexAttrib1d (GLuint index, GLdouble x){
  const static PFNGLVERTEXATTRIB1DPROC glfunc = ((PFNGLVERTEXATTRIB1DPROC)wglGetProcAddress("glVertexAttrib1d"));
  return glfunc ? glfunc(index, x) : 0;
}

inline void glVertexAttrib1dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIB1DVPROC glfunc = ((PFNGLVERTEXATTRIB1DVPROC)wglGetProcAddress("glVertexAttrib1dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib1f (GLuint index, GLfloat x){
  const static PFNGLVERTEXATTRIB1FPROC glfunc = ((PFNGLVERTEXATTRIB1FPROC)wglGetProcAddress("glVertexAttrib1f"));
  return glfunc ? glfunc(index, x) : 0;
}

inline void glVertexAttrib1fv (GLuint index, const GLfloat *v){
  const static PFNGLVERTEXATTRIB1FVPROC glfunc = ((PFNGLVERTEXATTRIB1FVPROC)wglGetProcAddress("glVertexAttrib1fv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib1s (GLuint index, GLshort x){
  const static PFNGLVERTEXATTRIB1SPROC glfunc = ((PFNGLVERTEXATTRIB1SPROC)wglGetProcAddress("glVertexAttrib1s"));
  return glfunc ? glfunc(index, x) : 0;
}

inline void glVertexAttrib1sv (GLuint index, const GLshort *v){
  const static PFNGLVERTEXATTRIB1SVPROC glfunc = ((PFNGLVERTEXATTRIB1SVPROC)wglGetProcAddress("glVertexAttrib1sv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y){
  const static PFNGLVERTEXATTRIB2DPROC glfunc = ((PFNGLVERTEXATTRIB2DPROC)wglGetProcAddress("glVertexAttrib2d"));
  return glfunc ? glfunc(index, x, y) : 0;
}

inline void glVertexAttrib2dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIB2DVPROC glfunc = ((PFNGLVERTEXATTRIB2DVPROC)wglGetProcAddress("glVertexAttrib2dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y){
  const static PFNGLVERTEXATTRIB2FPROC glfunc = ((PFNGLVERTEXATTRIB2FPROC)wglGetProcAddress("glVertexAttrib2f"));
  return glfunc ? glfunc(index, x, y) : 0;
}

inline void glVertexAttrib2fv (GLuint index, const GLfloat *v){
  const static PFNGLVERTEXATTRIB2FVPROC glfunc = ((PFNGLVERTEXATTRIB2FVPROC)wglGetProcAddress("glVertexAttrib2fv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib2s (GLuint index, GLshort x, GLshort y){
  const static PFNGLVERTEXATTRIB2SPROC glfunc = ((PFNGLVERTEXATTRIB2SPROC)wglGetProcAddress("glVertexAttrib2s"));
  return glfunc ? glfunc(index, x, y) : 0;
}

inline void glVertexAttrib2sv (GLuint index, const GLshort *v){
  const static PFNGLVERTEXATTRIB2SVPROC glfunc = ((PFNGLVERTEXATTRIB2SVPROC)wglGetProcAddress("glVertexAttrib2sv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){
  const static PFNGLVERTEXATTRIB3DPROC glfunc = ((PFNGLVERTEXATTRIB3DPROC)wglGetProcAddress("glVertexAttrib3d"));
  return glfunc ? glfunc(index, x, y, z) : 0;
}

inline void glVertexAttrib3dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIB3DVPROC glfunc = ((PFNGLVERTEXATTRIB3DVPROC)wglGetProcAddress("glVertexAttrib3dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z){
  const static PFNGLVERTEXATTRIB3FPROC glfunc = ((PFNGLVERTEXATTRIB3FPROC)wglGetProcAddress("glVertexAttrib3f"));
  return glfunc ? glfunc(index, x, y, z) : 0;
}

inline void glVertexAttrib3fv (GLuint index, const GLfloat *v){
  const static PFNGLVERTEXATTRIB3FVPROC glfunc = ((PFNGLVERTEXATTRIB3FVPROC)wglGetProcAddress("glVertexAttrib3fv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z){
  const static PFNGLVERTEXATTRIB3SPROC glfunc = ((PFNGLVERTEXATTRIB3SPROC)wglGetProcAddress("glVertexAttrib3s"));
  return glfunc ? glfunc(index, x, y, z) : 0;
}

inline void glVertexAttrib3sv (GLuint index, const GLshort *v){
  const static PFNGLVERTEXATTRIB3SVPROC glfunc = ((PFNGLVERTEXATTRIB3SVPROC)wglGetProcAddress("glVertexAttrib3sv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4Nbv (GLuint index, const GLbyte *v){
  const static PFNGLVERTEXATTRIB4NBVPROC glfunc = ((PFNGLVERTEXATTRIB4NBVPROC)wglGetProcAddress("glVertexAttrib4Nbv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4Niv (GLuint index, const GLint *v){
  const static PFNGLVERTEXATTRIB4NIVPROC glfunc = ((PFNGLVERTEXATTRIB4NIVPROC)wglGetProcAddress("glVertexAttrib4Niv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4Nsv (GLuint index, const GLshort *v){
  const static PFNGLVERTEXATTRIB4NSVPROC glfunc = ((PFNGLVERTEXATTRIB4NSVPROC)wglGetProcAddress("glVertexAttrib4Nsv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w){
  const static PFNGLVERTEXATTRIB4NUBPROC glfunc = ((PFNGLVERTEXATTRIB4NUBPROC)wglGetProcAddress("glVertexAttrib4Nub"));
  return glfunc ? glfunc(index, x, y, z, w) : 0;
}

inline void glVertexAttrib4Nubv (GLuint index, const GLubyte *v){
  const static PFNGLVERTEXATTRIB4NUBVPROC glfunc = ((PFNGLVERTEXATTRIB4NUBVPROC)wglGetProcAddress("glVertexAttrib4Nubv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4Nuiv (GLuint index, const GLuint *v){
  const static PFNGLVERTEXATTRIB4NUIVPROC glfunc = ((PFNGLVERTEXATTRIB4NUIVPROC)wglGetProcAddress("glVertexAttrib4Nuiv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4Nusv (GLuint index, const GLushort *v){
  const static PFNGLVERTEXATTRIB4NUSVPROC glfunc = ((PFNGLVERTEXATTRIB4NUSVPROC)wglGetProcAddress("glVertexAttrib4Nusv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4bv (GLuint index, const GLbyte *v){
  const static PFNGLVERTEXATTRIB4BVPROC glfunc = ((PFNGLVERTEXATTRIB4BVPROC)wglGetProcAddress("glVertexAttrib4bv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){
  const static PFNGLVERTEXATTRIB4DPROC glfunc = ((PFNGLVERTEXATTRIB4DPROC)wglGetProcAddress("glVertexAttrib4d"));
  return glfunc ? glfunc(index, x, y, z, w) : 0;
}

inline void glVertexAttrib4dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIB4DVPROC glfunc = ((PFNGLVERTEXATTRIB4DVPROC)wglGetProcAddress("glVertexAttrib4dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){
  const static PFNGLVERTEXATTRIB4FPROC glfunc = ((PFNGLVERTEXATTRIB4FPROC)wglGetProcAddress("glVertexAttrib4f"));
  return glfunc ? glfunc(index, x, y, z, w) : 0;
}

inline void glVertexAttrib4fv (GLuint index, const GLfloat *v){
  const static PFNGLVERTEXATTRIB4FVPROC glfunc = ((PFNGLVERTEXATTRIB4FVPROC)wglGetProcAddress("glVertexAttrib4fv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4iv (GLuint index, const GLint *v){
  const static PFNGLVERTEXATTRIB4IVPROC glfunc = ((PFNGLVERTEXATTRIB4IVPROC)wglGetProcAddress("glVertexAttrib4iv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w){
  const static PFNGLVERTEXATTRIB4SPROC glfunc = ((PFNGLVERTEXATTRIB4SPROC)wglGetProcAddress("glVertexAttrib4s"));
  return glfunc ? glfunc(index, x, y, z, w) : 0;
}

inline void glVertexAttrib4sv (GLuint index, const GLshort *v){
  const static PFNGLVERTEXATTRIB4SVPROC glfunc = ((PFNGLVERTEXATTRIB4SVPROC)wglGetProcAddress("glVertexAttrib4sv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4ubv (GLuint index, const GLubyte *v){
  const static PFNGLVERTEXATTRIB4UBVPROC glfunc = ((PFNGLVERTEXATTRIB4UBVPROC)wglGetProcAddress("glVertexAttrib4ubv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4uiv (GLuint index, const GLuint *v){
  const static PFNGLVERTEXATTRIB4UIVPROC glfunc = ((PFNGLVERTEXATTRIB4UIVPROC)wglGetProcAddress("glVertexAttrib4uiv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttrib4usv (GLuint index, const GLushort *v){
  const static PFNGLVERTEXATTRIB4USVPROC glfunc = ((PFNGLVERTEXATTRIB4USVPROC)wglGetProcAddress("glVertexAttrib4usv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer){
  const static PFNGLVERTEXATTRIBPOINTERPROC glfunc = ((PFNGLVERTEXATTRIBPOINTERPROC)wglGetProcAddress("glVertexAttribPointer"));
  return glfunc ? glfunc(index, size, type, normalized, stride, pointer) : 0;
}

inline void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX2X3FVPROC glfunc = ((PFNGLUNIFORMMATRIX2X3FVPROC)wglGetProcAddress("glUniformMatrix2x3fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX3X2FVPROC glfunc = ((PFNGLUNIFORMMATRIX3X2FVPROC)wglGetProcAddress("glUniformMatrix3x2fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX2X4FVPROC glfunc = ((PFNGLUNIFORMMATRIX2X4FVPROC)wglGetProcAddress("glUniformMatrix2x4fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX4X2FVPROC glfunc = ((PFNGLUNIFORMMATRIX4X2FVPROC)wglGetProcAddress("glUniformMatrix4x2fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX3X4FVPROC glfunc = ((PFNGLUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glUniformMatrix3x4fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLUNIFORMMATRIX4X3FVPROC glfunc = ((PFNGLUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glUniformMatrix4x3fv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a){
  const static PFNGLCOLORMASKIPROC glfunc = ((PFNGLCOLORMASKIPROC)wglGetProcAddress("glColorMaski"));
  return glfunc ? glfunc(index, r, g, b, a) : 0;
}

inline void glGetBooleani_v (GLenum target, GLuint index, GLboolean *data){
  const static PFNGLGETBOOLEANI_VPROC glfunc = ((PFNGLGETBOOLEANI_VPROC)wglGetProcAddress("glGetBooleani_v"));
  return glfunc ? glfunc(target, index, data) : 0;
}

inline void glGetIntegeri_v (GLenum target, GLuint index, GLint *data){
  const static PFNGLGETINTEGERI_VPROC glfunc = ((PFNGLGETINTEGERI_VPROC)wglGetProcAddress("glGetIntegeri_v"));
  return glfunc ? glfunc(target, index, data) : 0;
}

inline void glEnablei (GLenum target, GLuint index){
  const static PFNGLENABLEIPROC glfunc = ((PFNGLENABLEIPROC)wglGetProcAddress("glEnablei"));
  return glfunc ? glfunc(target, index) : 0;
}

inline void glDisablei (GLenum target, GLuint index){
  const static PFNGLDISABLEIPROC glfunc = ((PFNGLDISABLEIPROC)wglGetProcAddress("glDisablei"));
  return glfunc ? glfunc(target, index) : 0;
}

inline GLboolean glIsEnabledi (GLenum target, GLuint index){
  const static PFNGLISENABLEDIPROC glfunc = ((PFNGLISENABLEDIPROC)wglGetProcAddress("glIsEnabledi"));
  return glfunc ? glfunc(target, index) : 0;
}

inline void glBeginTransformFeedback (GLenum primitiveMode){
  const static PFNGLBEGINTRANSFORMFEEDBACKPROC glfunc = ((PFNGLBEGINTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBeginTransformFeedback"));
  return glfunc ? glfunc(primitiveMode) : 0;
}

inline void glEndTransformFeedback (void){
  const static PFNGLENDTRANSFORMFEEDBACKPROC glfunc = ((PFNGLENDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glEndTransformFeedback"));
  return glfunc ? glfunc() : 0;
}

inline void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){
  const static PFNGLBINDBUFFERRANGEPROC glfunc = ((PFNGLBINDBUFFERRANGEPROC)wglGetProcAddress("glBindBufferRange"));
  return glfunc ? glfunc(target, index, buffer, offset, size) : 0;
}

inline void glBindBufferBase (GLenum target, GLuint index, GLuint buffer){
  const static PFNGLBINDBUFFERBASEPROC glfunc = ((PFNGLBINDBUFFERBASEPROC)wglGetProcAddress("glBindBufferBase"));
  return glfunc ? glfunc(target, index, buffer) : 0;
}

inline void glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode){
  const static PFNGLTRANSFORMFEEDBACKVARYINGSPROC glfunc = ((PFNGLTRANSFORMFEEDBACKVARYINGSPROC)wglGetProcAddress("glTransformFeedbackVaryings"));
  return glfunc ? glfunc(program, count, varyings, bufferMode) : 0;
}

inline void glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name){
  const static PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glfunc = ((PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)wglGetProcAddress("glGetTransformFeedbackVarying"));
  return glfunc ? glfunc(program, index, bufSize, length, size, type, name) : 0;
}

inline void glClampColor (GLenum target, GLenum clamp){
  const static PFNGLCLAMPCOLORPROC glfunc = ((PFNGLCLAMPCOLORPROC)wglGetProcAddress("glClampColor"));
  return glfunc ? glfunc(target, clamp) : 0;
}

inline void glBeginConditionalRender (GLuint id, GLenum mode){
  const static PFNGLBEGINCONDITIONALRENDERPROC glfunc = ((PFNGLBEGINCONDITIONALRENDERPROC)wglGetProcAddress("glBeginConditionalRender"));
  return glfunc ? glfunc(id, mode) : 0;
}

inline void glEndConditionalRender (void){
  const static PFNGLENDCONDITIONALRENDERPROC glfunc = ((PFNGLENDCONDITIONALRENDERPROC)wglGetProcAddress("glEndConditionalRender"));
  return glfunc ? glfunc() : 0;
}

inline void glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer){
  const static PFNGLVERTEXATTRIBIPOINTERPROC glfunc = ((PFNGLVERTEXATTRIBIPOINTERPROC)wglGetProcAddress("glVertexAttribIPointer"));
  return glfunc ? glfunc(index, size, type, stride, pointer) : 0;
}

inline void glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params){
  const static PFNGLGETVERTEXATTRIBIIVPROC glfunc = ((PFNGLGETVERTEXATTRIBIIVPROC)wglGetProcAddress("glGetVertexAttribIiv"));
  return glfunc ? glfunc(index, pname, params) : 0;
}

inline void glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params){
  const static PFNGLGETVERTEXATTRIBIUIVPROC glfunc = ((PFNGLGETVERTEXATTRIBIUIVPROC)wglGetProcAddress("glGetVertexAttribIuiv"));
  return glfunc ? glfunc(index, pname, params) : 0;
}

inline void glVertexAttribI1i (GLuint index, GLint x){
  const static PFNGLVERTEXATTRIBI1IPROC glfunc = ((PFNGLVERTEXATTRIBI1IPROC)wglGetProcAddress("glVertexAttribI1i"));
  return glfunc ? glfunc(index, x) : 0;
}

inline void glVertexAttribI2i (GLuint index, GLint x, GLint y){
  const static PFNGLVERTEXATTRIBI2IPROC glfunc = ((PFNGLVERTEXATTRIBI2IPROC)wglGetProcAddress("glVertexAttribI2i"));
  return glfunc ? glfunc(index, x, y) : 0;
}

inline void glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z){
  const static PFNGLVERTEXATTRIBI3IPROC glfunc = ((PFNGLVERTEXATTRIBI3IPROC)wglGetProcAddress("glVertexAttribI3i"));
  return glfunc ? glfunc(index, x, y, z) : 0;
}

inline void glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w){
  const static PFNGLVERTEXATTRIBI4IPROC glfunc = ((PFNGLVERTEXATTRIBI4IPROC)wglGetProcAddress("glVertexAttribI4i"));
  return glfunc ? glfunc(index, x, y, z, w) : 0;
}

inline void glVertexAttribI1ui (GLuint index, GLuint x){
  const static PFNGLVERTEXATTRIBI1UIPROC glfunc = ((PFNGLVERTEXATTRIBI1UIPROC)wglGetProcAddress("glVertexAttribI1ui"));
  return glfunc ? glfunc(index, x) : 0;
}

inline void glVertexAttribI2ui (GLuint index, GLuint x, GLuint y){
  const static PFNGLVERTEXATTRIBI2UIPROC glfunc = ((PFNGLVERTEXATTRIBI2UIPROC)wglGetProcAddress("glVertexAttribI2ui"));
  return glfunc ? glfunc(index, x, y) : 0;
}

inline void glVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z){
  const static PFNGLVERTEXATTRIBI3UIPROC glfunc = ((PFNGLVERTEXATTRIBI3UIPROC)wglGetProcAddress("glVertexAttribI3ui"));
  return glfunc ? glfunc(index, x, y, z) : 0;
}

inline void glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w){
  const static PFNGLVERTEXATTRIBI4UIPROC glfunc = ((PFNGLVERTEXATTRIBI4UIPROC)wglGetProcAddress("glVertexAttribI4ui"));
  return glfunc ? glfunc(index, x, y, z, w) : 0;
}

inline void glVertexAttribI1iv (GLuint index, const GLint *v){
  const static PFNGLVERTEXATTRIBI1IVPROC glfunc = ((PFNGLVERTEXATTRIBI1IVPROC)wglGetProcAddress("glVertexAttribI1iv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI2iv (GLuint index, const GLint *v){
  const static PFNGLVERTEXATTRIBI2IVPROC glfunc = ((PFNGLVERTEXATTRIBI2IVPROC)wglGetProcAddress("glVertexAttribI2iv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI3iv (GLuint index, const GLint *v){
  const static PFNGLVERTEXATTRIBI3IVPROC glfunc = ((PFNGLVERTEXATTRIBI3IVPROC)wglGetProcAddress("glVertexAttribI3iv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI4iv (GLuint index, const GLint *v){
  const static PFNGLVERTEXATTRIBI4IVPROC glfunc = ((PFNGLVERTEXATTRIBI4IVPROC)wglGetProcAddress("glVertexAttribI4iv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI1uiv (GLuint index, const GLuint *v){
  const static PFNGLVERTEXATTRIBI1UIVPROC glfunc = ((PFNGLVERTEXATTRIBI1UIVPROC)wglGetProcAddress("glVertexAttribI1uiv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI2uiv (GLuint index, const GLuint *v){
  const static PFNGLVERTEXATTRIBI2UIVPROC glfunc = ((PFNGLVERTEXATTRIBI2UIVPROC)wglGetProcAddress("glVertexAttribI2uiv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI3uiv (GLuint index, const GLuint *v){
  const static PFNGLVERTEXATTRIBI3UIVPROC glfunc = ((PFNGLVERTEXATTRIBI3UIVPROC)wglGetProcAddress("glVertexAttribI3uiv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI4uiv (GLuint index, const GLuint *v){
  const static PFNGLVERTEXATTRIBI4UIVPROC glfunc = ((PFNGLVERTEXATTRIBI4UIVPROC)wglGetProcAddress("glVertexAttribI4uiv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI4bv (GLuint index, const GLbyte *v){
  const static PFNGLVERTEXATTRIBI4BVPROC glfunc = ((PFNGLVERTEXATTRIBI4BVPROC)wglGetProcAddress("glVertexAttribI4bv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI4sv (GLuint index, const GLshort *v){
  const static PFNGLVERTEXATTRIBI4SVPROC glfunc = ((PFNGLVERTEXATTRIBI4SVPROC)wglGetProcAddress("glVertexAttribI4sv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI4ubv (GLuint index, const GLubyte *v){
  const static PFNGLVERTEXATTRIBI4UBVPROC glfunc = ((PFNGLVERTEXATTRIBI4UBVPROC)wglGetProcAddress("glVertexAttribI4ubv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribI4usv (GLuint index, const GLushort *v){
  const static PFNGLVERTEXATTRIBI4USVPROC glfunc = ((PFNGLVERTEXATTRIBI4USVPROC)wglGetProcAddress("glVertexAttribI4usv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glGetUniformuiv (GLuint program, GLint location, GLuint *params){
  const static PFNGLGETUNIFORMUIVPROC glfunc = ((PFNGLGETUNIFORMUIVPROC)wglGetProcAddress("glGetUniformuiv"));
  return glfunc ? glfunc(program, location, params) : 0;
}

inline void glBindFragDataLocation (GLuint program, GLuint color, const GLchar *name){
  const static PFNGLBINDFRAGDATALOCATIONPROC glfunc = ((PFNGLBINDFRAGDATALOCATIONPROC)wglGetProcAddress("glBindFragDataLocation"));
  return glfunc ? glfunc(program, color, name) : 0;
}

inline GLint glGetFragDataLocation (GLuint program, const GLchar *name){
  const static PFNGLGETFRAGDATALOCATIONPROC glfunc = ((PFNGLGETFRAGDATALOCATIONPROC)wglGetProcAddress("glGetFragDataLocation"));
  return glfunc ? glfunc(program, name) : 0;
}

inline void glUniform1ui (GLint location, GLuint v0){
  const static PFNGLUNIFORM1UIPROC glfunc = ((PFNGLUNIFORM1UIPROC)wglGetProcAddress("glUniform1ui"));
  return glfunc ? glfunc(location, v0) : 0;
}

inline void glUniform2ui (GLint location, GLuint v0, GLuint v1){
  const static PFNGLUNIFORM2UIPROC glfunc = ((PFNGLUNIFORM2UIPROC)wglGetProcAddress("glUniform2ui"));
  return glfunc ? glfunc(location, v0, v1) : 0;
}

inline void glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2){
  const static PFNGLUNIFORM3UIPROC glfunc = ((PFNGLUNIFORM3UIPROC)wglGetProcAddress("glUniform3ui"));
  return glfunc ? glfunc(location, v0, v1, v2) : 0;
}

inline void glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){
  const static PFNGLUNIFORM4UIPROC glfunc = ((PFNGLUNIFORM4UIPROC)wglGetProcAddress("glUniform4ui"));
  return glfunc ? glfunc(location, v0, v1, v2, v3) : 0;
}

inline void glUniform1uiv (GLint location, GLsizei count, const GLuint *value){
  const static PFNGLUNIFORM1UIVPROC glfunc = ((PFNGLUNIFORM1UIVPROC)wglGetProcAddress("glUniform1uiv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform2uiv (GLint location, GLsizei count, const GLuint *value){
  const static PFNGLUNIFORM2UIVPROC glfunc = ((PFNGLUNIFORM2UIVPROC)wglGetProcAddress("glUniform2uiv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform3uiv (GLint location, GLsizei count, const GLuint *value){
  const static PFNGLUNIFORM3UIVPROC glfunc = ((PFNGLUNIFORM3UIVPROC)wglGetProcAddress("glUniform3uiv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform4uiv (GLint location, GLsizei count, const GLuint *value){
  const static PFNGLUNIFORM4UIVPROC glfunc = ((PFNGLUNIFORM4UIVPROC)wglGetProcAddress("glUniform4uiv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glTexParameterIiv (GLenum target, GLenum pname, const GLint *params){
  const static PFNGLTEXPARAMETERIIVPROC glfunc = ((PFNGLTEXPARAMETERIIVPROC)wglGetProcAddress("glTexParameterIiv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glTexParameterIuiv (GLenum target, GLenum pname, const GLuint *params){
  const static PFNGLTEXPARAMETERIUIVPROC glfunc = ((PFNGLTEXPARAMETERIUIVPROC)wglGetProcAddress("glTexParameterIuiv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glGetTexParameterIiv (GLenum target, GLenum pname, GLint *params){
  const static PFNGLGETTEXPARAMETERIIVPROC glfunc = ((PFNGLGETTEXPARAMETERIIVPROC)wglGetProcAddress("glGetTexParameterIiv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint *params){
  const static PFNGLGETTEXPARAMETERIUIVPROC glfunc = ((PFNGLGETTEXPARAMETERIUIVPROC)wglGetProcAddress("glGetTexParameterIuiv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value){
  const static PFNGLCLEARBUFFERIVPROC glfunc = ((PFNGLCLEARBUFFERIVPROC)wglGetProcAddress("glClearBufferiv"));
  return glfunc ? glfunc(buffer, drawbuffer, value) : 0;
}

inline void glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value){
  const static PFNGLCLEARBUFFERUIVPROC glfunc = ((PFNGLCLEARBUFFERUIVPROC)wglGetProcAddress("glClearBufferuiv"));
  return glfunc ? glfunc(buffer, drawbuffer, value) : 0;
}

inline void glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value){
  const static PFNGLCLEARBUFFERFVPROC glfunc = ((PFNGLCLEARBUFFERFVPROC)wglGetProcAddress("glClearBufferfv"));
  return glfunc ? glfunc(buffer, drawbuffer, value) : 0;
}

inline void glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){
  const static PFNGLCLEARBUFFERFIPROC glfunc = ((PFNGLCLEARBUFFERFIPROC)wglGetProcAddress("glClearBufferfi"));
  return glfunc ? glfunc(buffer, drawbuffer, depth, stencil) : 0;
}

inline const GLubyte *glGetStringi (GLenum name, GLuint index){
  const static PFNGLGETSTRINGIPROC glfunc = ((PFNGLGETSTRINGIPROC)wglGetProcAddress("glGetStringi"));
  return glfunc ? glfunc(name, index) : 0;
}

inline GLboolean glIsRenderbuffer (GLuint renderbuffer){
  const static PFNGLISRENDERBUFFERPROC glfunc = ((PFNGLISRENDERBUFFERPROC)wglGetProcAddress("glIsRenderbuffer"));
  return glfunc ? glfunc(renderbuffer) : 0;
}

inline void glBindRenderbuffer (GLenum target, GLuint renderbuffer){
  const static PFNGLBINDRENDERBUFFERPROC glfunc = ((PFNGLBINDRENDERBUFFERPROC)wglGetProcAddress("glBindRenderbuffer"));
  return glfunc ? glfunc(target, renderbuffer) : 0;
}

inline void glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers){
  const static PFNGLDELETERENDERBUFFERSPROC glfunc = ((PFNGLDELETERENDERBUFFERSPROC)wglGetProcAddress("glDeleteRenderbuffers"));
  return glfunc ? glfunc(n, renderbuffers) : 0;
}

inline void glGenRenderbuffers (GLsizei n, GLuint *renderbuffers){
  const static PFNGLGENRENDERBUFFERSPROC glfunc = ((PFNGLGENRENDERBUFFERSPROC)wglGetProcAddress("glGenRenderbuffers"));
  return glfunc ? glfunc(n, renderbuffers) : 0;
}

inline void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height){
  const static PFNGLRENDERBUFFERSTORAGEPROC glfunc = ((PFNGLRENDERBUFFERSTORAGEPROC)wglGetProcAddress("glRenderbufferStorage"));
  return glfunc ? glfunc(target, internalformat, width, height) : 0;
}

inline void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params){
  const static PFNGLGETRENDERBUFFERPARAMETERIVPROC glfunc = ((PFNGLGETRENDERBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetRenderbufferParameteriv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline GLboolean glIsFramebuffer (GLuint framebuffer){
  const static PFNGLISFRAMEBUFFERPROC glfunc = ((PFNGLISFRAMEBUFFERPROC)wglGetProcAddress("glIsFramebuffer"));
  return glfunc ? glfunc(framebuffer) : 0;
}

inline void glBindFramebuffer (GLenum target, GLuint framebuffer){
  const static PFNGLBINDFRAMEBUFFERPROC glfunc = ((PFNGLBINDFRAMEBUFFERPROC)wglGetProcAddress("glBindFramebuffer"));
  return glfunc ? glfunc(target, framebuffer) : 0;
}

inline void glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers){
  const static PFNGLDELETEFRAMEBUFFERSPROC glfunc = ((PFNGLDELETEFRAMEBUFFERSPROC)wglGetProcAddress("glDeleteFramebuffers"));
  return glfunc ? glfunc(n, framebuffers) : 0;
}

inline void glGenFramebuffers (GLsizei n, GLuint *framebuffers){
  const static PFNGLGENFRAMEBUFFERSPROC glfunc = ((PFNGLGENFRAMEBUFFERSPROC)wglGetProcAddress("glGenFramebuffers"));
  return glfunc ? glfunc(n, framebuffers) : 0;
}

inline GLenum glCheckFramebufferStatus (GLenum target){
  const static PFNGLCHECKFRAMEBUFFERSTATUSPROC glfunc = ((PFNGLCHECKFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckFramebufferStatus"));
  return glfunc ? glfunc(target) : 0;
}

inline void glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){
  const static PFNGLFRAMEBUFFERTEXTURE1DPROC glfunc = ((PFNGLFRAMEBUFFERTEXTURE1DPROC)wglGetProcAddress("glFramebufferTexture1D"));
  return glfunc ? glfunc(target, attachment, textarget, texture, level) : 0;
}

inline void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){
  const static PFNGLFRAMEBUFFERTEXTURE2DPROC glfunc = ((PFNGLFRAMEBUFFERTEXTURE2DPROC)wglGetProcAddress("glFramebufferTexture2D"));
  return glfunc ? glfunc(target, attachment, textarget, texture, level) : 0;
}

inline void glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset){
  const static PFNGLFRAMEBUFFERTEXTURE3DPROC glfunc = ((PFNGLFRAMEBUFFERTEXTURE3DPROC)wglGetProcAddress("glFramebufferTexture3D"));
  return glfunc ? glfunc(target, attachment, textarget, texture, level, zoffset) : 0;
}

inline void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){
  const static PFNGLFRAMEBUFFERRENDERBUFFERPROC glfunc = ((PFNGLFRAMEBUFFERRENDERBUFFERPROC)wglGetProcAddress("glFramebufferRenderbuffer"));
  return glfunc ? glfunc(target, attachment, renderbuffertarget, renderbuffer) : 0;
}

inline void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params){
  const static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glfunc = ((PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wglGetProcAddress("glGetFramebufferAttachmentParameteriv"));
  return glfunc ? glfunc(target, attachment, pname, params) : 0;
}

inline void glGenerateMipmap (GLenum target){
  const static PFNGLGENERATEMIPMAPPROC glfunc = ((PFNGLGENERATEMIPMAPPROC)wglGetProcAddress("glGenerateMipmap"));
  return glfunc ? glfunc(target) : 0;
}

inline void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){
  const static PFNGLBLITFRAMEBUFFERPROC glfunc = ((PFNGLBLITFRAMEBUFFERPROC)wglGetProcAddress("glBlitFramebuffer"));
  return glfunc ? glfunc(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter) : 0;
}

inline void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){
  const static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glfunc = ((PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)wglGetProcAddress("glRenderbufferStorageMultisample"));
  return glfunc ? glfunc(target, samples, internalformat, width, height) : 0;
}

inline void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer){
  const static PFNGLFRAMEBUFFERTEXTURELAYERPROC glfunc = ((PFNGLFRAMEBUFFERTEXTURELAYERPROC)wglGetProcAddress("glFramebufferTextureLayer"));
  return glfunc ? glfunc(target, attachment, texture, level, layer) : 0;
}

inline void *glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access){
  const static PFNGLMAPBUFFERRANGEPROC glfunc = ((PFNGLMAPBUFFERRANGEPROC)wglGetProcAddress("glMapBufferRange"));
  return glfunc ? glfunc(target, offset, length, access) : 0;
}

inline void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length){
  const static PFNGLFLUSHMAPPEDBUFFERRANGEPROC glfunc = ((PFNGLFLUSHMAPPEDBUFFERRANGEPROC)wglGetProcAddress("glFlushMappedBufferRange"));
  return glfunc ? glfunc(target, offset, length) : 0;
}

inline void glBindVertexArray (GLuint array){
  const static PFNGLBINDVERTEXARRAYPROC glfunc = ((PFNGLBINDVERTEXARRAYPROC)wglGetProcAddress("glBindVertexArray"));
  return glfunc ? glfunc(array) : 0;
}

inline void glDeleteVertexArrays (GLsizei n, const GLuint *arrays){
  const static PFNGLDELETEVERTEXARRAYSPROC glfunc = ((PFNGLDELETEVERTEXARRAYSPROC)wglGetProcAddress("glDeleteVertexArrays"));
  return glfunc ? glfunc(n, arrays) : 0;
}

inline void glGenVertexArrays (GLsizei n, GLuint *arrays){
  const static PFNGLGENVERTEXARRAYSPROC glfunc = ((PFNGLGENVERTEXARRAYSPROC)wglGetProcAddress("glGenVertexArrays"));
  return glfunc ? glfunc(n, arrays) : 0;
}

inline GLboolean glIsVertexArray (GLuint array){
  const static PFNGLISVERTEXARRAYPROC glfunc = ((PFNGLISVERTEXARRAYPROC)wglGetProcAddress("glIsVertexArray"));
  return glfunc ? glfunc(array) : 0;
}

inline void glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount){
  const static PFNGLDRAWARRAYSINSTANCEDPROC glfunc = ((PFNGLDRAWARRAYSINSTANCEDPROC)wglGetProcAddress("glDrawArraysInstanced"));
  return glfunc ? glfunc(mode, first, count, instancecount) : 0;
}

inline void glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount){
  const static PFNGLDRAWELEMENTSINSTANCEDPROC glfunc = ((PFNGLDRAWELEMENTSINSTANCEDPROC)wglGetProcAddress("glDrawElementsInstanced"));
  return glfunc ? glfunc(mode, count, type, indices, instancecount) : 0;
}

inline void glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer){
  const static PFNGLTEXBUFFERPROC glfunc = ((PFNGLTEXBUFFERPROC)wglGetProcAddress("glTexBuffer"));
  return glfunc ? glfunc(target, internalformat, buffer) : 0;
}

inline void glPrimitiveRestartIndex (GLuint index){
  const static PFNGLPRIMITIVERESTARTINDEXPROC glfunc = ((PFNGLPRIMITIVERESTARTINDEXPROC)wglGetProcAddress("glPrimitiveRestartIndex"));
  return glfunc ? glfunc(index) : 0;
}

inline void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){
  const static PFNGLCOPYBUFFERSUBDATAPROC glfunc = ((PFNGLCOPYBUFFERSUBDATAPROC)wglGetProcAddress("glCopyBufferSubData"));
  return glfunc ? glfunc(readTarget, writeTarget, readOffset, writeOffset, size) : 0;
}

inline void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices){
  const static PFNGLGETUNIFORMINDICESPROC glfunc = ((PFNGLGETUNIFORMINDICESPROC)wglGetProcAddress("glGetUniformIndices"));
  return glfunc ? glfunc(program, uniformCount, uniformNames, uniformIndices) : 0;
}

inline void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params){
  const static PFNGLGETACTIVEUNIFORMSIVPROC glfunc = ((PFNGLGETACTIVEUNIFORMSIVPROC)wglGetProcAddress("glGetActiveUniformsiv"));
  return glfunc ? glfunc(program, uniformCount, uniformIndices, pname, params) : 0;
}

inline void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName){
  const static PFNGLGETACTIVEUNIFORMNAMEPROC glfunc = ((PFNGLGETACTIVEUNIFORMNAMEPROC)wglGetProcAddress("glGetActiveUniformName"));
  return glfunc ? glfunc(program, uniformIndex, bufSize, length, uniformName) : 0;
}

inline GLuint glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName){
  const static PFNGLGETUNIFORMBLOCKINDEXPROC glfunc = ((PFNGLGETUNIFORMBLOCKINDEXPROC)wglGetProcAddress("glGetUniformBlockIndex"));
  return glfunc ? glfunc(program, uniformBlockName) : 0;
}

inline void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params){
  const static PFNGLGETACTIVEUNIFORMBLOCKIVPROC glfunc = ((PFNGLGETACTIVEUNIFORMBLOCKIVPROC)wglGetProcAddress("glGetActiveUniformBlockiv"));
  return glfunc ? glfunc(program, uniformBlockIndex, pname, params) : 0;
}

inline void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName){
  const static PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glfunc = ((PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)wglGetProcAddress("glGetActiveUniformBlockName"));
  return glfunc ? glfunc(program, uniformBlockIndex, bufSize, length, uniformBlockName) : 0;
}

inline void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding){
  const static PFNGLUNIFORMBLOCKBINDINGPROC glfunc = ((PFNGLUNIFORMBLOCKBINDINGPROC)wglGetProcAddress("glUniformBlockBinding"));
  return glfunc ? glfunc(program, uniformBlockIndex, uniformBlockBinding) : 0;
}

inline void glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex){
  const static PFNGLDRAWELEMENTSBASEVERTEXPROC glfunc = ((PFNGLDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawElementsBaseVertex"));
  return glfunc ? glfunc(mode, count, type, indices, basevertex) : 0;
}

inline void glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex){
  const static PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glfunc = ((PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawRangeElementsBaseVertex"));
  return glfunc ? glfunc(mode, start, end, count, type, indices, basevertex) : 0;
}

inline void glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex){
  const static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glfunc = ((PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)wglGetProcAddress("glDrawElementsInstancedBaseVertex"));
  return glfunc ? glfunc(mode, count, type, indices, instancecount, basevertex) : 0;
}

inline void glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex){
  const static PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glfunc = ((PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glMultiDrawElementsBaseVertex"));
  return glfunc ? glfunc(mode, count, type, indices, drawcount, basevertex) : 0;
}

inline void glProvokingVertex (GLenum mode){
  const static PFNGLPROVOKINGVERTEXPROC glfunc = ((PFNGLPROVOKINGVERTEXPROC)wglGetProcAddress("glProvokingVertex"));
  return glfunc ? glfunc(mode) : 0;
}

inline GLsync glFenceSync (GLenum condition, GLbitfield flags){
  const static PFNGLFENCESYNCPROC glfunc = ((PFNGLFENCESYNCPROC)wglGetProcAddress("glFenceSync"));
  return glfunc ? glfunc(condition, flags) : 0;
}

inline GLboolean glIsSync (GLsync sync){
  const static PFNGLISSYNCPROC glfunc = ((PFNGLISSYNCPROC)wglGetProcAddress("glIsSync"));
  return glfunc ? glfunc(sync) : 0;
}

inline void glDeleteSync (GLsync sync){
  const static PFNGLDELETESYNCPROC glfunc = ((PFNGLDELETESYNCPROC)wglGetProcAddress("glDeleteSync"));
  return glfunc ? glfunc(sync) : 0;
}

inline GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){
  const static PFNGLCLIENTWAITSYNCPROC glfunc = ((PFNGLCLIENTWAITSYNCPROC)wglGetProcAddress("glClientWaitSync"));
  return glfunc ? glfunc(sync, flags, timeout) : 0;
}

inline void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){
  const static PFNGLWAITSYNCPROC glfunc = ((PFNGLWAITSYNCPROC)wglGetProcAddress("glWaitSync"));
  return glfunc ? glfunc(sync, flags, timeout) : 0;
}

inline void glGetInteger64v (GLenum pname, GLint64 *data){
  const static PFNGLGETINTEGER64VPROC glfunc = ((PFNGLGETINTEGER64VPROC)wglGetProcAddress("glGetInteger64v"));
  return glfunc ? glfunc(pname, data) : 0;
}

inline void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values){
  const static PFNGLGETSYNCIVPROC glfunc = ((PFNGLGETSYNCIVPROC)wglGetProcAddress("glGetSynciv"));
  return glfunc ? glfunc(sync, pname, bufSize, length, values) : 0;
}

inline void glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data){
  const static PFNGLGETINTEGER64I_VPROC glfunc = ((PFNGLGETINTEGER64I_VPROC)wglGetProcAddress("glGetInteger64i_v"));
  return glfunc ? glfunc(target, index, data) : 0;
}

inline void glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params){
  const static PFNGLGETBUFFERPARAMETERI64VPROC glfunc = ((PFNGLGETBUFFERPARAMETERI64VPROC)wglGetProcAddress("glGetBufferParameteri64v"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level){
  const static PFNGLFRAMEBUFFERTEXTUREPROC glfunc = ((PFNGLFRAMEBUFFERTEXTUREPROC)wglGetProcAddress("glFramebufferTexture"));
  return glfunc ? glfunc(target, attachment, texture, level) : 0;
}

inline void glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){
  const static PFNGLTEXIMAGE2DMULTISAMPLEPROC glfunc = ((PFNGLTEXIMAGE2DMULTISAMPLEPROC)wglGetProcAddress("glTexImage2DMultisample"));
  return glfunc ? glfunc(target, samples, internalformat, width, height, fixedsamplelocations) : 0;
}

inline void glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){
  const static PFNGLTEXIMAGE3DMULTISAMPLEPROC glfunc = ((PFNGLTEXIMAGE3DMULTISAMPLEPROC)wglGetProcAddress("glTexImage3DMultisample"));
  return glfunc ? glfunc(target, samples, internalformat, width, height, depth, fixedsamplelocations) : 0;
}

inline void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val){
  const static PFNGLGETMULTISAMPLEFVPROC glfunc = ((PFNGLGETMULTISAMPLEFVPROC)wglGetProcAddress("glGetMultisamplefv"));
  return glfunc ? glfunc(pname, index, val) : 0;
}

inline void glSampleMaski (GLuint maskNumber, GLbitfield mask){
  const static PFNGLSAMPLEMASKIPROC glfunc = ((PFNGLSAMPLEMASKIPROC)wglGetProcAddress("glSampleMaski"));
  return glfunc ? glfunc(maskNumber, mask) : 0;
}

inline void glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name){
  const static PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glfunc = ((PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)wglGetProcAddress("glBindFragDataLocationIndexed"));
  return glfunc ? glfunc(program, colorNumber, index, name) : 0;
}

inline GLint glGetFragDataIndex (GLuint program, const GLchar *name){
  const static PFNGLGETFRAGDATAINDEXPROC glfunc = ((PFNGLGETFRAGDATAINDEXPROC)wglGetProcAddress("glGetFragDataIndex"));
  return glfunc ? glfunc(program, name) : 0;
}

inline void glGenSamplers (GLsizei count, GLuint *samplers){
  const static PFNGLGENSAMPLERSPROC glfunc = ((PFNGLGENSAMPLERSPROC)wglGetProcAddress("glGenSamplers"));
  return glfunc ? glfunc(count, samplers) : 0;
}

inline void glDeleteSamplers (GLsizei count, const GLuint *samplers){
  const static PFNGLDELETESAMPLERSPROC glfunc = ((PFNGLDELETESAMPLERSPROC)wglGetProcAddress("glDeleteSamplers"));
  return glfunc ? glfunc(count, samplers) : 0;
}

inline GLboolean glIsSampler (GLuint sampler){
  const static PFNGLISSAMPLERPROC glfunc = ((PFNGLISSAMPLERPROC)wglGetProcAddress("glIsSampler"));
  return glfunc ? glfunc(sampler) : 0;
}

inline void glBindSampler (GLuint unit, GLuint sampler){
  const static PFNGLBINDSAMPLERPROC glfunc = ((PFNGLBINDSAMPLERPROC)wglGetProcAddress("glBindSampler"));
  return glfunc ? glfunc(unit, sampler) : 0;
}

inline void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param){
  const static PFNGLSAMPLERPARAMETERIPROC glfunc = ((PFNGLSAMPLERPARAMETERIPROC)wglGetProcAddress("glSamplerParameteri"));
  return glfunc ? glfunc(sampler, pname, param) : 0;
}

inline void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param){
  const static PFNGLSAMPLERPARAMETERIVPROC glfunc = ((PFNGLSAMPLERPARAMETERIVPROC)wglGetProcAddress("glSamplerParameteriv"));
  return glfunc ? glfunc(sampler, pname, param) : 0;
}

inline void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param){
  const static PFNGLSAMPLERPARAMETERFPROC glfunc = ((PFNGLSAMPLERPARAMETERFPROC)wglGetProcAddress("glSamplerParameterf"));
  return glfunc ? glfunc(sampler, pname, param) : 0;
}

inline void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param){
  const static PFNGLSAMPLERPARAMETERFVPROC glfunc = ((PFNGLSAMPLERPARAMETERFVPROC)wglGetProcAddress("glSamplerParameterfv"));
  return glfunc ? glfunc(sampler, pname, param) : 0;
}

inline void glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param){
  const static PFNGLSAMPLERPARAMETERIIVPROC glfunc = ((PFNGLSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glSamplerParameterIiv"));
  return glfunc ? glfunc(sampler, pname, param) : 0;
}

inline void glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param){
  const static PFNGLSAMPLERPARAMETERIUIVPROC glfunc = ((PFNGLSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glSamplerParameterIuiv"));
  return glfunc ? glfunc(sampler, pname, param) : 0;
}

inline void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params){
  const static PFNGLGETSAMPLERPARAMETERIVPROC glfunc = ((PFNGLGETSAMPLERPARAMETERIVPROC)wglGetProcAddress("glGetSamplerParameteriv"));
  return glfunc ? glfunc(sampler, pname, params) : 0;
}

inline void glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params){
  const static PFNGLGETSAMPLERPARAMETERIIVPROC glfunc = ((PFNGLGETSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glGetSamplerParameterIiv"));
  return glfunc ? glfunc(sampler, pname, params) : 0;
}

inline void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params){
  const static PFNGLGETSAMPLERPARAMETERFVPROC glfunc = ((PFNGLGETSAMPLERPARAMETERFVPROC)wglGetProcAddress("glGetSamplerParameterfv"));
  return glfunc ? glfunc(sampler, pname, params) : 0;
}

inline void glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params){
  const static PFNGLGETSAMPLERPARAMETERIUIVPROC glfunc = ((PFNGLGETSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glGetSamplerParameterIuiv"));
  return glfunc ? glfunc(sampler, pname, params) : 0;
}

inline void glQueryCounter (GLuint id, GLenum target){
  const static PFNGLQUERYCOUNTERPROC glfunc = ((PFNGLQUERYCOUNTERPROC)wglGetProcAddress("glQueryCounter"));
  return glfunc ? glfunc(id, target) : 0;
}

inline void glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 *params){
  const static PFNGLGETQUERYOBJECTI64VPROC glfunc = ((PFNGLGETQUERYOBJECTI64VPROC)wglGetProcAddress("glGetQueryObjecti64v"));
  return glfunc ? glfunc(id, pname, params) : 0;
}

inline void glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 *params){
  const static PFNGLGETQUERYOBJECTUI64VPROC glfunc = ((PFNGLGETQUERYOBJECTUI64VPROC)wglGetProcAddress("glGetQueryObjectui64v"));
  return glfunc ? glfunc(id, pname, params) : 0;
}

inline void glVertexAttribDivisor (GLuint index, GLuint divisor){
  const static PFNGLVERTEXATTRIBDIVISORPROC glfunc = ((PFNGLVERTEXATTRIBDIVISORPROC)wglGetProcAddress("glVertexAttribDivisor"));
  return glfunc ? glfunc(index, divisor) : 0;
}

inline void glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){
  const static PFNGLVERTEXATTRIBP1UIPROC glfunc = ((PFNGLVERTEXATTRIBP1UIPROC)wglGetProcAddress("glVertexAttribP1ui"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){
  const static PFNGLVERTEXATTRIBP1UIVPROC glfunc = ((PFNGLVERTEXATTRIBP1UIVPROC)wglGetProcAddress("glVertexAttribP1uiv"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){
  const static PFNGLVERTEXATTRIBP2UIPROC glfunc = ((PFNGLVERTEXATTRIBP2UIPROC)wglGetProcAddress("glVertexAttribP2ui"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){
  const static PFNGLVERTEXATTRIBP2UIVPROC glfunc = ((PFNGLVERTEXATTRIBP2UIVPROC)wglGetProcAddress("glVertexAttribP2uiv"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){
  const static PFNGLVERTEXATTRIBP3UIPROC glfunc = ((PFNGLVERTEXATTRIBP3UIPROC)wglGetProcAddress("glVertexAttribP3ui"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){
  const static PFNGLVERTEXATTRIBP3UIVPROC glfunc = ((PFNGLVERTEXATTRIBP3UIVPROC)wglGetProcAddress("glVertexAttribP3uiv"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){
  const static PFNGLVERTEXATTRIBP4UIPROC glfunc = ((PFNGLVERTEXATTRIBP4UIPROC)wglGetProcAddress("glVertexAttribP4ui"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){
  const static PFNGLVERTEXATTRIBP4UIVPROC glfunc = ((PFNGLVERTEXATTRIBP4UIVPROC)wglGetProcAddress("glVertexAttribP4uiv"));
  return glfunc ? glfunc(index, type, normalized, value) : 0;
}

inline void glVertexP2ui (GLenum type, GLuint value){
  const static PFNGLVERTEXP2UIPROC glfunc = ((PFNGLVERTEXP2UIPROC)wglGetProcAddress("glVertexP2ui"));
  return glfunc ? glfunc(type, value) : 0;
}

inline void glVertexP2uiv (GLenum type, const GLuint *value){
  const static PFNGLVERTEXP2UIVPROC glfunc = ((PFNGLVERTEXP2UIVPROC)wglGetProcAddress("glVertexP2uiv"));
  return glfunc ? glfunc(type, value) : 0;
}

inline void glVertexP3ui (GLenum type, GLuint value){
  const static PFNGLVERTEXP3UIPROC glfunc = ((PFNGLVERTEXP3UIPROC)wglGetProcAddress("glVertexP3ui"));
  return glfunc ? glfunc(type, value) : 0;
}

inline void glVertexP3uiv (GLenum type, const GLuint *value){
  const static PFNGLVERTEXP3UIVPROC glfunc = ((PFNGLVERTEXP3UIVPROC)wglGetProcAddress("glVertexP3uiv"));
  return glfunc ? glfunc(type, value) : 0;
}

inline void glVertexP4ui (GLenum type, GLuint value){
  const static PFNGLVERTEXP4UIPROC glfunc = ((PFNGLVERTEXP4UIPROC)wglGetProcAddress("glVertexP4ui"));
  return glfunc ? glfunc(type, value) : 0;
}

inline void glVertexP4uiv (GLenum type, const GLuint *value){
  const static PFNGLVERTEXP4UIVPROC glfunc = ((PFNGLVERTEXP4UIVPROC)wglGetProcAddress("glVertexP4uiv"));
  return glfunc ? glfunc(type, value) : 0;
}

inline void glTexCoordP1ui (GLenum type, GLuint coords){
  const static PFNGLTEXCOORDP1UIPROC glfunc = ((PFNGLTEXCOORDP1UIPROC)wglGetProcAddress("glTexCoordP1ui"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glTexCoordP1uiv (GLenum type, const GLuint *coords){
  const static PFNGLTEXCOORDP1UIVPROC glfunc = ((PFNGLTEXCOORDP1UIVPROC)wglGetProcAddress("glTexCoordP1uiv"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glTexCoordP2ui (GLenum type, GLuint coords){
  const static PFNGLTEXCOORDP2UIPROC glfunc = ((PFNGLTEXCOORDP2UIPROC)wglGetProcAddress("glTexCoordP2ui"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glTexCoordP2uiv (GLenum type, const GLuint *coords){
  const static PFNGLTEXCOORDP2UIVPROC glfunc = ((PFNGLTEXCOORDP2UIVPROC)wglGetProcAddress("glTexCoordP2uiv"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glTexCoordP3ui (GLenum type, GLuint coords){
  const static PFNGLTEXCOORDP3UIPROC glfunc = ((PFNGLTEXCOORDP3UIPROC)wglGetProcAddress("glTexCoordP3ui"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glTexCoordP3uiv (GLenum type, const GLuint *coords){
  const static PFNGLTEXCOORDP3UIVPROC glfunc = ((PFNGLTEXCOORDP3UIVPROC)wglGetProcAddress("glTexCoordP3uiv"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glTexCoordP4ui (GLenum type, GLuint coords){
  const static PFNGLTEXCOORDP4UIPROC glfunc = ((PFNGLTEXCOORDP4UIPROC)wglGetProcAddress("glTexCoordP4ui"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glTexCoordP4uiv (GLenum type, const GLuint *coords){
  const static PFNGLTEXCOORDP4UIVPROC glfunc = ((PFNGLTEXCOORDP4UIVPROC)wglGetProcAddress("glTexCoordP4uiv"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glMultiTexCoordP1ui (GLenum texture, GLenum type, GLuint coords){
  const static PFNGLMULTITEXCOORDP1UIPROC glfunc = ((PFNGLMULTITEXCOORDP1UIPROC)wglGetProcAddress("glMultiTexCoordP1ui"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glMultiTexCoordP1uiv (GLenum texture, GLenum type, const GLuint *coords){
  const static PFNGLMULTITEXCOORDP1UIVPROC glfunc = ((PFNGLMULTITEXCOORDP1UIVPROC)wglGetProcAddress("glMultiTexCoordP1uiv"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glMultiTexCoordP2ui (GLenum texture, GLenum type, GLuint coords){
  const static PFNGLMULTITEXCOORDP2UIPROC glfunc = ((PFNGLMULTITEXCOORDP2UIPROC)wglGetProcAddress("glMultiTexCoordP2ui"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glMultiTexCoordP2uiv (GLenum texture, GLenum type, const GLuint *coords){
  const static PFNGLMULTITEXCOORDP2UIVPROC glfunc = ((PFNGLMULTITEXCOORDP2UIVPROC)wglGetProcAddress("glMultiTexCoordP2uiv"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glMultiTexCoordP3ui (GLenum texture, GLenum type, GLuint coords){
  const static PFNGLMULTITEXCOORDP3UIPROC glfunc = ((PFNGLMULTITEXCOORDP3UIPROC)wglGetProcAddress("glMultiTexCoordP3ui"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glMultiTexCoordP3uiv (GLenum texture, GLenum type, const GLuint *coords){
  const static PFNGLMULTITEXCOORDP3UIVPROC glfunc = ((PFNGLMULTITEXCOORDP3UIVPROC)wglGetProcAddress("glMultiTexCoordP3uiv"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glMultiTexCoordP4ui (GLenum texture, GLenum type, GLuint coords){
  const static PFNGLMULTITEXCOORDP4UIPROC glfunc = ((PFNGLMULTITEXCOORDP4UIPROC)wglGetProcAddress("glMultiTexCoordP4ui"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glMultiTexCoordP4uiv (GLenum texture, GLenum type, const GLuint *coords){
  const static PFNGLMULTITEXCOORDP4UIVPROC glfunc = ((PFNGLMULTITEXCOORDP4UIVPROC)wglGetProcAddress("glMultiTexCoordP4uiv"));
  return glfunc ? glfunc(texture, type, coords) : 0;
}

inline void glNormalP3ui (GLenum type, GLuint coords){
  const static PFNGLNORMALP3UIPROC glfunc = ((PFNGLNORMALP3UIPROC)wglGetProcAddress("glNormalP3ui"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glNormalP3uiv (GLenum type, const GLuint *coords){
  const static PFNGLNORMALP3UIVPROC glfunc = ((PFNGLNORMALP3UIVPROC)wglGetProcAddress("glNormalP3uiv"));
  return glfunc ? glfunc(type, coords) : 0;
}

inline void glColorP3ui (GLenum type, GLuint color){
  const static PFNGLCOLORP3UIPROC glfunc = ((PFNGLCOLORP3UIPROC)wglGetProcAddress("glColorP3ui"));
  return glfunc ? glfunc(type, color) : 0;
}

inline void glColorP3uiv (GLenum type, const GLuint *color){
  const static PFNGLCOLORP3UIVPROC glfunc = ((PFNGLCOLORP3UIVPROC)wglGetProcAddress("glColorP3uiv"));
  return glfunc ? glfunc(type, color) : 0;
}

inline void glColorP4ui (GLenum type, GLuint color){
  const static PFNGLCOLORP4UIPROC glfunc = ((PFNGLCOLORP4UIPROC)wglGetProcAddress("glColorP4ui"));
  return glfunc ? glfunc(type, color) : 0;
}

inline void glColorP4uiv (GLenum type, const GLuint *color){
  const static PFNGLCOLORP4UIVPROC glfunc = ((PFNGLCOLORP4UIVPROC)wglGetProcAddress("glColorP4uiv"));
  return glfunc ? glfunc(type, color) : 0;
}

inline void glSecondaryColorP3ui (GLenum type, GLuint color){
  const static PFNGLSECONDARYCOLORP3UIPROC glfunc = ((PFNGLSECONDARYCOLORP3UIPROC)wglGetProcAddress("glSecondaryColorP3ui"));
  return glfunc ? glfunc(type, color) : 0;
}

inline void glSecondaryColorP3uiv (GLenum type, const GLuint *color){
  const static PFNGLSECONDARYCOLORP3UIVPROC glfunc = ((PFNGLSECONDARYCOLORP3UIVPROC)wglGetProcAddress("glSecondaryColorP3uiv"));
  return glfunc ? glfunc(type, color) : 0;
}

inline void glMinSampleShading (GLfloat value){
  const static PFNGLMINSAMPLESHADINGPROC glfunc = ((PFNGLMINSAMPLESHADINGPROC)wglGetProcAddress("glMinSampleShading"));
  return glfunc ? glfunc(value) : 0;
}

inline void glBlendEquationi (GLuint buf, GLenum mode){
  const static PFNGLBLENDEQUATIONIPROC glfunc = ((PFNGLBLENDEQUATIONIPROC)wglGetProcAddress("glBlendEquationi"));
  return glfunc ? glfunc(buf, mode) : 0;
}

inline void glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha){
  const static PFNGLBLENDEQUATIONSEPARATEIPROC glfunc = ((PFNGLBLENDEQUATIONSEPARATEIPROC)wglGetProcAddress("glBlendEquationSeparatei"));
  return glfunc ? glfunc(buf, modeRGB, modeAlpha) : 0;
}

inline void glBlendFunci (GLuint buf, GLenum src, GLenum dst){
  const static PFNGLBLENDFUNCIPROC glfunc = ((PFNGLBLENDFUNCIPROC)wglGetProcAddress("glBlendFunci"));
  return glfunc ? glfunc(buf, src, dst) : 0;
}

inline void glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha){
  const static PFNGLBLENDFUNCSEPARATEIPROC glfunc = ((PFNGLBLENDFUNCSEPARATEIPROC)wglGetProcAddress("glBlendFuncSeparatei"));
  return glfunc ? glfunc(buf, srcRGB, dstRGB, srcAlpha, dstAlpha) : 0;
}

inline void glDrawArraysIndirect (GLenum mode, const void *indirect){
  const static PFNGLDRAWARRAYSINDIRECTPROC glfunc = ((PFNGLDRAWARRAYSINDIRECTPROC)wglGetProcAddress("glDrawArraysIndirect"));
  return glfunc ? glfunc(mode, indirect) : 0;
}

inline void glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect){
  const static PFNGLDRAWELEMENTSINDIRECTPROC glfunc = ((PFNGLDRAWELEMENTSINDIRECTPROC)wglGetProcAddress("glDrawElementsIndirect"));
  return glfunc ? glfunc(mode, type, indirect) : 0;
}

inline void glUniform1d (GLint location, GLdouble x){
  const static PFNGLUNIFORM1DPROC glfunc = ((PFNGLUNIFORM1DPROC)wglGetProcAddress("glUniform1d"));
  return glfunc ? glfunc(location, x) : 0;
}

inline void glUniform2d (GLint location, GLdouble x, GLdouble y){
  const static PFNGLUNIFORM2DPROC glfunc = ((PFNGLUNIFORM2DPROC)wglGetProcAddress("glUniform2d"));
  return glfunc ? glfunc(location, x, y) : 0;
}

inline void glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z){
  const static PFNGLUNIFORM3DPROC glfunc = ((PFNGLUNIFORM3DPROC)wglGetProcAddress("glUniform3d"));
  return glfunc ? glfunc(location, x, y, z) : 0;
}

inline void glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w){
  const static PFNGLUNIFORM4DPROC glfunc = ((PFNGLUNIFORM4DPROC)wglGetProcAddress("glUniform4d"));
  return glfunc ? glfunc(location, x, y, z, w) : 0;
}

inline void glUniform1dv (GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLUNIFORM1DVPROC glfunc = ((PFNGLUNIFORM1DVPROC)wglGetProcAddress("glUniform1dv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform2dv (GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLUNIFORM2DVPROC glfunc = ((PFNGLUNIFORM2DVPROC)wglGetProcAddress("glUniform2dv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform3dv (GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLUNIFORM3DVPROC glfunc = ((PFNGLUNIFORM3DVPROC)wglGetProcAddress("glUniform3dv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniform4dv (GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLUNIFORM4DVPROC glfunc = ((PFNGLUNIFORM4DVPROC)wglGetProcAddress("glUniform4dv"));
  return glfunc ? glfunc(location, count, value) : 0;
}

inline void glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX2DVPROC glfunc = ((PFNGLUNIFORMMATRIX2DVPROC)wglGetProcAddress("glUniformMatrix2dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX3DVPROC glfunc = ((PFNGLUNIFORMMATRIX3DVPROC)wglGetProcAddress("glUniformMatrix3dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX4DVPROC glfunc = ((PFNGLUNIFORMMATRIX4DVPROC)wglGetProcAddress("glUniformMatrix4dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX2X3DVPROC glfunc = ((PFNGLUNIFORMMATRIX2X3DVPROC)wglGetProcAddress("glUniformMatrix2x3dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX2X4DVPROC glfunc = ((PFNGLUNIFORMMATRIX2X4DVPROC)wglGetProcAddress("glUniformMatrix2x4dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX3X2DVPROC glfunc = ((PFNGLUNIFORMMATRIX3X2DVPROC)wglGetProcAddress("glUniformMatrix3x2dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX3X4DVPROC glfunc = ((PFNGLUNIFORMMATRIX3X4DVPROC)wglGetProcAddress("glUniformMatrix3x4dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX4X2DVPROC glfunc = ((PFNGLUNIFORMMATRIX4X2DVPROC)wglGetProcAddress("glUniformMatrix4x2dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLUNIFORMMATRIX4X3DVPROC glfunc = ((PFNGLUNIFORMMATRIX4X3DVPROC)wglGetProcAddress("glUniformMatrix4x3dv"));
  return glfunc ? glfunc(location, count, transpose, value) : 0;
}

inline void glGetUniformdv (GLuint program, GLint location, GLdouble *params){
  const static PFNGLGETUNIFORMDVPROC glfunc = ((PFNGLGETUNIFORMDVPROC)wglGetProcAddress("glGetUniformdv"));
  return glfunc ? glfunc(program, location, params) : 0;
}

inline GLint glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar *name){
  const static PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glfunc = ((PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)wglGetProcAddress("glGetSubroutineUniformLocation"));
  return glfunc ? glfunc(program, shadertype, name) : 0;
}

inline GLuint glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar *name){
  const static PFNGLGETSUBROUTINEINDEXPROC glfunc = ((PFNGLGETSUBROUTINEINDEXPROC)wglGetProcAddress("glGetSubroutineIndex"));
  return glfunc ? glfunc(program, shadertype, name) : 0;
}

inline void glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values){
  const static PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glfunc = ((PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)wglGetProcAddress("glGetActiveSubroutineUniformiv"));
  return glfunc ? glfunc(program, shadertype, index, pname, values) : 0;
}

inline void glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name){
  const static PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glfunc = ((PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)wglGetProcAddress("glGetActiveSubroutineUniformName"));
  return glfunc ? glfunc(program, shadertype, index, bufsize, length, name) : 0;
}

inline void glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name){
  const static PFNGLGETACTIVESUBROUTINENAMEPROC glfunc = ((PFNGLGETACTIVESUBROUTINENAMEPROC)wglGetProcAddress("glGetActiveSubroutineName"));
  return glfunc ? glfunc(program, shadertype, index, bufsize, length, name) : 0;
}

inline void glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint *indices){
  const static PFNGLUNIFORMSUBROUTINESUIVPROC glfunc = ((PFNGLUNIFORMSUBROUTINESUIVPROC)wglGetProcAddress("glUniformSubroutinesuiv"));
  return glfunc ? glfunc(shadertype, count, indices) : 0;
}

inline void glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint *params){
  const static PFNGLGETUNIFORMSUBROUTINEUIVPROC glfunc = ((PFNGLGETUNIFORMSUBROUTINEUIVPROC)wglGetProcAddress("glGetUniformSubroutineuiv"));
  return glfunc ? glfunc(shadertype, location, params) : 0;
}

inline void glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint *values){
  const static PFNGLGETPROGRAMSTAGEIVPROC glfunc = ((PFNGLGETPROGRAMSTAGEIVPROC)wglGetProcAddress("glGetProgramStageiv"));
  return glfunc ? glfunc(program, shadertype, pname, values) : 0;
}

inline void glPatchParameteri (GLenum pname, GLint value){
  const static PFNGLPATCHPARAMETERIPROC glfunc = ((PFNGLPATCHPARAMETERIPROC)wglGetProcAddress("glPatchParameteri"));
  return glfunc ? glfunc(pname, value) : 0;
}

inline void glPatchParameterfv (GLenum pname, const GLfloat *values){
  const static PFNGLPATCHPARAMETERFVPROC glfunc = ((PFNGLPATCHPARAMETERFVPROC)wglGetProcAddress("glPatchParameterfv"));
  return glfunc ? glfunc(pname, values) : 0;
}

inline void glBindTransformFeedback (GLenum target, GLuint id){
  const static PFNGLBINDTRANSFORMFEEDBACKPROC glfunc = ((PFNGLBINDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBindTransformFeedback"));
  return glfunc ? glfunc(target, id) : 0;
}

inline void glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids){
  const static PFNGLDELETETRANSFORMFEEDBACKSPROC glfunc = ((PFNGLDELETETRANSFORMFEEDBACKSPROC)wglGetProcAddress("glDeleteTransformFeedbacks"));
  return glfunc ? glfunc(n, ids) : 0;
}

inline void glGenTransformFeedbacks (GLsizei n, GLuint *ids){
  const static PFNGLGENTRANSFORMFEEDBACKSPROC glfunc = ((PFNGLGENTRANSFORMFEEDBACKSPROC)wglGetProcAddress("glGenTransformFeedbacks"));
  return glfunc ? glfunc(n, ids) : 0;
}

inline GLboolean glIsTransformFeedback (GLuint id){
  const static PFNGLISTRANSFORMFEEDBACKPROC glfunc = ((PFNGLISTRANSFORMFEEDBACKPROC)wglGetProcAddress("glIsTransformFeedback"));
  return glfunc ? glfunc(id) : 0;
}

inline void glPauseTransformFeedback (void){
  const static PFNGLPAUSETRANSFORMFEEDBACKPROC glfunc = ((PFNGLPAUSETRANSFORMFEEDBACKPROC)wglGetProcAddress("glPauseTransformFeedback"));
  return glfunc ? glfunc() : 0;
}

inline void glResumeTransformFeedback (void){
  const static PFNGLRESUMETRANSFORMFEEDBACKPROC glfunc = ((PFNGLRESUMETRANSFORMFEEDBACKPROC)wglGetProcAddress("glResumeTransformFeedback"));
  return glfunc ? glfunc() : 0;
}

inline void glDrawTransformFeedback (GLenum mode, GLuint id){
  const static PFNGLDRAWTRANSFORMFEEDBACKPROC glfunc = ((PFNGLDRAWTRANSFORMFEEDBACKPROC)wglGetProcAddress("glDrawTransformFeedback"));
  return glfunc ? glfunc(mode, id) : 0;
}

inline void glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream){
  const static PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glfunc = ((PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)wglGetProcAddress("glDrawTransformFeedbackStream"));
  return glfunc ? glfunc(mode, id, stream) : 0;
}

inline void glBeginQueryIndexed (GLenum target, GLuint index, GLuint id){
  const static PFNGLBEGINQUERYINDEXEDPROC glfunc = ((PFNGLBEGINQUERYINDEXEDPROC)wglGetProcAddress("glBeginQueryIndexed"));
  return glfunc ? glfunc(target, index, id) : 0;
}

inline void glEndQueryIndexed (GLenum target, GLuint index){
  const static PFNGLENDQUERYINDEXEDPROC glfunc = ((PFNGLENDQUERYINDEXEDPROC)wglGetProcAddress("glEndQueryIndexed"));
  return glfunc ? glfunc(target, index) : 0;
}

inline void glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint *params){
  const static PFNGLGETQUERYINDEXEDIVPROC glfunc = ((PFNGLGETQUERYINDEXEDIVPROC)wglGetProcAddress("glGetQueryIndexediv"));
  return glfunc ? glfunc(target, index, pname, params) : 0;
}

inline void glReleaseShaderCompiler (void){
  const static PFNGLRELEASESHADERCOMPILERPROC glfunc = ((PFNGLRELEASESHADERCOMPILERPROC)wglGetProcAddress("glReleaseShaderCompiler"));
  return glfunc ? glfunc() : 0;
}

inline void glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length){
  const static PFNGLSHADERBINARYPROC glfunc = ((PFNGLSHADERBINARYPROC)wglGetProcAddress("glShaderBinary"));
  return glfunc ? glfunc(count, shaders, binaryformat, binary, length) : 0;
}

inline void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision){
  const static PFNGLGETSHADERPRECISIONFORMATPROC glfunc = ((PFNGLGETSHADERPRECISIONFORMATPROC)wglGetProcAddress("glGetShaderPrecisionFormat"));
  return glfunc ? glfunc(shadertype, precisiontype, range, precision) : 0;
}

inline void glDepthRangef (GLfloat n, GLfloat f){
  const static PFNGLDEPTHRANGEFPROC glfunc = ((PFNGLDEPTHRANGEFPROC)wglGetProcAddress("glDepthRangef"));
  return glfunc ? glfunc(n, f) : 0;
}

inline void glClearDepthf (GLfloat d){
  const static PFNGLCLEARDEPTHFPROC glfunc = ((PFNGLCLEARDEPTHFPROC)wglGetProcAddress("glClearDepthf"));
  return glfunc ? glfunc(d) : 0;
}

inline void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary){
  const static PFNGLGETPROGRAMBINARYPROC glfunc = ((PFNGLGETPROGRAMBINARYPROC)wglGetProcAddress("glGetProgramBinary"));
  return glfunc ? glfunc(program, bufSize, length, binaryFormat, binary) : 0;
}

inline void glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length){
  const static PFNGLPROGRAMBINARYPROC glfunc = ((PFNGLPROGRAMBINARYPROC)wglGetProcAddress("glProgramBinary"));
  return glfunc ? glfunc(program, binaryFormat, binary, length) : 0;
}

inline void glProgramParameteri (GLuint program, GLenum pname, GLint value){
  const static PFNGLPROGRAMPARAMETERIPROC glfunc = ((PFNGLPROGRAMPARAMETERIPROC)wglGetProcAddress("glProgramParameteri"));
  return glfunc ? glfunc(program, pname, value) : 0;
}

inline void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program){
  const static PFNGLUSEPROGRAMSTAGESPROC glfunc = ((PFNGLUSEPROGRAMSTAGESPROC)wglGetProcAddress("glUseProgramStages"));
  return glfunc ? glfunc(pipeline, stages, program) : 0;
}

inline void glActiveShaderProgram (GLuint pipeline, GLuint program){
  const static PFNGLACTIVESHADERPROGRAMPROC glfunc = ((PFNGLACTIVESHADERPROGRAMPROC)wglGetProcAddress("glActiveShaderProgram"));
  return glfunc ? glfunc(pipeline, program) : 0;
}

inline GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings){
  const static PFNGLCREATESHADERPROGRAMVPROC glfunc = ((PFNGLCREATESHADERPROGRAMVPROC)wglGetProcAddress("glCreateShaderProgramv"));
  return glfunc ? glfunc(type, count, strings) : 0;
}

inline void glBindProgramPipeline (GLuint pipeline){
  const static PFNGLBINDPROGRAMPIPELINEPROC glfunc = ((PFNGLBINDPROGRAMPIPELINEPROC)wglGetProcAddress("glBindProgramPipeline"));
  return glfunc ? glfunc(pipeline) : 0;
}

inline void glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines){
  const static PFNGLDELETEPROGRAMPIPELINESPROC glfunc = ((PFNGLDELETEPROGRAMPIPELINESPROC)wglGetProcAddress("glDeleteProgramPipelines"));
  return glfunc ? glfunc(n, pipelines) : 0;
}

inline void glGenProgramPipelines (GLsizei n, GLuint *pipelines){
  const static PFNGLGENPROGRAMPIPELINESPROC glfunc = ((PFNGLGENPROGRAMPIPELINESPROC)wglGetProcAddress("glGenProgramPipelines"));
  return glfunc ? glfunc(n, pipelines) : 0;
}

inline GLboolean glIsProgramPipeline (GLuint pipeline){
  const static PFNGLISPROGRAMPIPELINEPROC glfunc = ((PFNGLISPROGRAMPIPELINEPROC)wglGetProcAddress("glIsProgramPipeline"));
  return glfunc ? glfunc(pipeline) : 0;
}

inline void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params){
  const static PFNGLGETPROGRAMPIPELINEIVPROC glfunc = ((PFNGLGETPROGRAMPIPELINEIVPROC)wglGetProcAddress("glGetProgramPipelineiv"));
  return glfunc ? glfunc(pipeline, pname, params) : 0;
}

inline void glProgramUniform1i (GLuint program, GLint location, GLint v0){
  const static PFNGLPROGRAMUNIFORM1IPROC glfunc = ((PFNGLPROGRAMUNIFORM1IPROC)wglGetProcAddress("glProgramUniform1i"));
  return glfunc ? glfunc(program, location, v0) : 0;
}

inline void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value){
  const static PFNGLPROGRAMUNIFORM1IVPROC glfunc = ((PFNGLPROGRAMUNIFORM1IVPROC)wglGetProcAddress("glProgramUniform1iv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform1f (GLuint program, GLint location, GLfloat v0){
  const static PFNGLPROGRAMUNIFORM1FPROC glfunc = ((PFNGLPROGRAMUNIFORM1FPROC)wglGetProcAddress("glProgramUniform1f"));
  return glfunc ? glfunc(program, location, v0) : 0;
}

inline void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORM1FVPROC glfunc = ((PFNGLPROGRAMUNIFORM1FVPROC)wglGetProcAddress("glProgramUniform1fv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform1d (GLuint program, GLint location, GLdouble v0){
  const static PFNGLPROGRAMUNIFORM1DPROC glfunc = ((PFNGLPROGRAMUNIFORM1DPROC)wglGetProcAddress("glProgramUniform1d"));
  return glfunc ? glfunc(program, location, v0) : 0;
}

inline void glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORM1DVPROC glfunc = ((PFNGLPROGRAMUNIFORM1DVPROC)wglGetProcAddress("glProgramUniform1dv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform1ui (GLuint program, GLint location, GLuint v0){
  const static PFNGLPROGRAMUNIFORM1UIPROC glfunc = ((PFNGLPROGRAMUNIFORM1UIPROC)wglGetProcAddress("glProgramUniform1ui"));
  return glfunc ? glfunc(program, location, v0) : 0;
}

inline void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){
  const static PFNGLPROGRAMUNIFORM1UIVPROC glfunc = ((PFNGLPROGRAMUNIFORM1UIVPROC)wglGetProcAddress("glProgramUniform1uiv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1){
  const static PFNGLPROGRAMUNIFORM2IPROC glfunc = ((PFNGLPROGRAMUNIFORM2IPROC)wglGetProcAddress("glProgramUniform2i"));
  return glfunc ? glfunc(program, location, v0, v1) : 0;
}

inline void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value){
  const static PFNGLPROGRAMUNIFORM2IVPROC glfunc = ((PFNGLPROGRAMUNIFORM2IVPROC)wglGetProcAddress("glProgramUniform2iv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1){
  const static PFNGLPROGRAMUNIFORM2FPROC glfunc = ((PFNGLPROGRAMUNIFORM2FPROC)wglGetProcAddress("glProgramUniform2f"));
  return glfunc ? glfunc(program, location, v0, v1) : 0;
}

inline void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORM2FVPROC glfunc = ((PFNGLPROGRAMUNIFORM2FVPROC)wglGetProcAddress("glProgramUniform2fv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1){
  const static PFNGLPROGRAMUNIFORM2DPROC glfunc = ((PFNGLPROGRAMUNIFORM2DPROC)wglGetProcAddress("glProgramUniform2d"));
  return glfunc ? glfunc(program, location, v0, v1) : 0;
}

inline void glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORM2DVPROC glfunc = ((PFNGLPROGRAMUNIFORM2DVPROC)wglGetProcAddress("glProgramUniform2dv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1){
  const static PFNGLPROGRAMUNIFORM2UIPROC glfunc = ((PFNGLPROGRAMUNIFORM2UIPROC)wglGetProcAddress("glProgramUniform2ui"));
  return glfunc ? glfunc(program, location, v0, v1) : 0;
}

inline void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){
  const static PFNGLPROGRAMUNIFORM2UIVPROC glfunc = ((PFNGLPROGRAMUNIFORM2UIVPROC)wglGetProcAddress("glProgramUniform2uiv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2){
  const static PFNGLPROGRAMUNIFORM3IPROC glfunc = ((PFNGLPROGRAMUNIFORM3IPROC)wglGetProcAddress("glProgramUniform3i"));
  return glfunc ? glfunc(program, location, v0, v1, v2) : 0;
}

inline void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value){
  const static PFNGLPROGRAMUNIFORM3IVPROC glfunc = ((PFNGLPROGRAMUNIFORM3IVPROC)wglGetProcAddress("glProgramUniform3iv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2){
  const static PFNGLPROGRAMUNIFORM3FPROC glfunc = ((PFNGLPROGRAMUNIFORM3FPROC)wglGetProcAddress("glProgramUniform3f"));
  return glfunc ? glfunc(program, location, v0, v1, v2) : 0;
}

inline void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORM3FVPROC glfunc = ((PFNGLPROGRAMUNIFORM3FVPROC)wglGetProcAddress("glProgramUniform3fv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2){
  const static PFNGLPROGRAMUNIFORM3DPROC glfunc = ((PFNGLPROGRAMUNIFORM3DPROC)wglGetProcAddress("glProgramUniform3d"));
  return glfunc ? glfunc(program, location, v0, v1, v2) : 0;
}

inline void glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORM3DVPROC glfunc = ((PFNGLPROGRAMUNIFORM3DVPROC)wglGetProcAddress("glProgramUniform3dv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2){
  const static PFNGLPROGRAMUNIFORM3UIPROC glfunc = ((PFNGLPROGRAMUNIFORM3UIPROC)wglGetProcAddress("glProgramUniform3ui"));
  return glfunc ? glfunc(program, location, v0, v1, v2) : 0;
}

inline void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){
  const static PFNGLPROGRAMUNIFORM3UIVPROC glfunc = ((PFNGLPROGRAMUNIFORM3UIVPROC)wglGetProcAddress("glProgramUniform3uiv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3){
  const static PFNGLPROGRAMUNIFORM4IPROC glfunc = ((PFNGLPROGRAMUNIFORM4IPROC)wglGetProcAddress("glProgramUniform4i"));
  return glfunc ? glfunc(program, location, v0, v1, v2, v3) : 0;
}

inline void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value){
  const static PFNGLPROGRAMUNIFORM4IVPROC glfunc = ((PFNGLPROGRAMUNIFORM4IVPROC)wglGetProcAddress("glProgramUniform4iv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){
  const static PFNGLPROGRAMUNIFORM4FPROC glfunc = ((PFNGLPROGRAMUNIFORM4FPROC)wglGetProcAddress("glProgramUniform4f"));
  return glfunc ? glfunc(program, location, v0, v1, v2, v3) : 0;
}

inline void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORM4FVPROC glfunc = ((PFNGLPROGRAMUNIFORM4FVPROC)wglGetProcAddress("glProgramUniform4fv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3){
  const static PFNGLPROGRAMUNIFORM4DPROC glfunc = ((PFNGLPROGRAMUNIFORM4DPROC)wglGetProcAddress("glProgramUniform4d"));
  return glfunc ? glfunc(program, location, v0, v1, v2, v3) : 0;
}

inline void glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORM4DVPROC glfunc = ((PFNGLPROGRAMUNIFORM4DVPROC)wglGetProcAddress("glProgramUniform4dv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){
  const static PFNGLPROGRAMUNIFORM4UIPROC glfunc = ((PFNGLPROGRAMUNIFORM4UIPROC)wglGetProcAddress("glProgramUniform4ui"));
  return glfunc ? glfunc(program, location, v0, v1, v2, v3) : 0;
}

inline void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){
  const static PFNGLPROGRAMUNIFORM4UIVPROC glfunc = ((PFNGLPROGRAMUNIFORM4UIVPROC)wglGetProcAddress("glProgramUniform4uiv"));
  return glfunc ? glfunc(program, location, count, value) : 0;
}

inline void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX2FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX2FVPROC)wglGetProcAddress("glProgramUniformMatrix2fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX3FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX3FVPROC)wglGetProcAddress("glProgramUniformMatrix3fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX4FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX4FVPROC)wglGetProcAddress("glProgramUniformMatrix4fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX2DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX2DVPROC)wglGetProcAddress("glProgramUniformMatrix2dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX3DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX3DVPROC)wglGetProcAddress("glProgramUniformMatrix3dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX4DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX4DVPROC)wglGetProcAddress("glProgramUniformMatrix4dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)wglGetProcAddress("glProgramUniformMatrix2x3fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)wglGetProcAddress("glProgramUniformMatrix3x2fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)wglGetProcAddress("glProgramUniformMatrix2x4fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)wglGetProcAddress("glProgramUniformMatrix4x2fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glProgramUniformMatrix3x4fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  const static PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glProgramUniformMatrix4x3fv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)wglGetProcAddress("glProgramUniformMatrix2x3dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)wglGetProcAddress("glProgramUniformMatrix3x2dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)wglGetProcAddress("glProgramUniformMatrix2x4dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)wglGetProcAddress("glProgramUniformMatrix4x2dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)wglGetProcAddress("glProgramUniformMatrix3x4dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){
  const static PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glfunc = ((PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)wglGetProcAddress("glProgramUniformMatrix4x3dv"));
  return glfunc ? glfunc(program, location, count, transpose, value) : 0;
}

inline void glValidateProgramPipeline (GLuint pipeline){
  const static PFNGLVALIDATEPROGRAMPIPELINEPROC glfunc = ((PFNGLVALIDATEPROGRAMPIPELINEPROC)wglGetProcAddress("glValidateProgramPipeline"));
  return glfunc ? glfunc(pipeline) : 0;
}

inline void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog){
  const static PFNGLGETPROGRAMPIPELINEINFOLOGPROC glfunc = ((PFNGLGETPROGRAMPIPELINEINFOLOGPROC)wglGetProcAddress("glGetProgramPipelineInfoLog"));
  return glfunc ? glfunc(pipeline, bufSize, length, infoLog) : 0;
}

inline void glVertexAttribL1d (GLuint index, GLdouble x){
  const static PFNGLVERTEXATTRIBL1DPROC glfunc = ((PFNGLVERTEXATTRIBL1DPROC)wglGetProcAddress("glVertexAttribL1d"));
  return glfunc ? glfunc(index, x) : 0;
}

inline void glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y){
  const static PFNGLVERTEXATTRIBL2DPROC glfunc = ((PFNGLVERTEXATTRIBL2DPROC)wglGetProcAddress("glVertexAttribL2d"));
  return glfunc ? glfunc(index, x, y) : 0;
}

inline void glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){
  const static PFNGLVERTEXATTRIBL3DPROC glfunc = ((PFNGLVERTEXATTRIBL3DPROC)wglGetProcAddress("glVertexAttribL3d"));
  return glfunc ? glfunc(index, x, y, z) : 0;
}

inline void glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){
  const static PFNGLVERTEXATTRIBL4DPROC glfunc = ((PFNGLVERTEXATTRIBL4DPROC)wglGetProcAddress("glVertexAttribL4d"));
  return glfunc ? glfunc(index, x, y, z, w) : 0;
}

inline void glVertexAttribL1dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIBL1DVPROC glfunc = ((PFNGLVERTEXATTRIBL1DVPROC)wglGetProcAddress("glVertexAttribL1dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribL2dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIBL2DVPROC glfunc = ((PFNGLVERTEXATTRIBL2DVPROC)wglGetProcAddress("glVertexAttribL2dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribL3dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIBL3DVPROC glfunc = ((PFNGLVERTEXATTRIBL3DVPROC)wglGetProcAddress("glVertexAttribL3dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribL4dv (GLuint index, const GLdouble *v){
  const static PFNGLVERTEXATTRIBL4DVPROC glfunc = ((PFNGLVERTEXATTRIBL4DVPROC)wglGetProcAddress("glVertexAttribL4dv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer){
  const static PFNGLVERTEXATTRIBLPOINTERPROC glfunc = ((PFNGLVERTEXATTRIBLPOINTERPROC)wglGetProcAddress("glVertexAttribLPointer"));
  return glfunc ? glfunc(index, size, type, stride, pointer) : 0;
}

inline void glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params){
  const static PFNGLGETVERTEXATTRIBLDVPROC glfunc = ((PFNGLGETVERTEXATTRIBLDVPROC)wglGetProcAddress("glGetVertexAttribLdv"));
  return glfunc ? glfunc(index, pname, params) : 0;
}

inline void glViewportArrayv (GLuint first, GLsizei count, const GLfloat *v){
  const static PFNGLVIEWPORTARRAYVPROC glfunc = ((PFNGLVIEWPORTARRAYVPROC)wglGetProcAddress("glViewportArrayv"));
  return glfunc ? glfunc(first, count, v) : 0;
}

inline void glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h){
  const static PFNGLVIEWPORTINDEXEDFPROC glfunc = ((PFNGLVIEWPORTINDEXEDFPROC)wglGetProcAddress("glViewportIndexedf"));
  return glfunc ? glfunc(index, x, y, w, h) : 0;
}

inline void glViewportIndexedfv (GLuint index, const GLfloat *v){
  const static PFNGLVIEWPORTINDEXEDFVPROC glfunc = ((PFNGLVIEWPORTINDEXEDFVPROC)wglGetProcAddress("glViewportIndexedfv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glScissorArrayv (GLuint first, GLsizei count, const GLint *v){
  const static PFNGLSCISSORARRAYVPROC glfunc = ((PFNGLSCISSORARRAYVPROC)wglGetProcAddress("glScissorArrayv"));
  return glfunc ? glfunc(first, count, v) : 0;
}

inline void glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height){
  const static PFNGLSCISSORINDEXEDPROC glfunc = ((PFNGLSCISSORINDEXEDPROC)wglGetProcAddress("glScissorIndexed"));
  return glfunc ? glfunc(index, left, bottom, width, height) : 0;
}

inline void glScissorIndexedv (GLuint index, const GLint *v){
  const static PFNGLSCISSORINDEXEDVPROC glfunc = ((PFNGLSCISSORINDEXEDVPROC)wglGetProcAddress("glScissorIndexedv"));
  return glfunc ? glfunc(index, v) : 0;
}

inline void glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble *v){
  const static PFNGLDEPTHRANGEARRAYVPROC glfunc = ((PFNGLDEPTHRANGEARRAYVPROC)wglGetProcAddress("glDepthRangeArrayv"));
  return glfunc ? glfunc(first, count, v) : 0;
}

inline void glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f){
  const static PFNGLDEPTHRANGEINDEXEDPROC glfunc = ((PFNGLDEPTHRANGEINDEXEDPROC)wglGetProcAddress("glDepthRangeIndexed"));
  return glfunc ? glfunc(index, n, f) : 0;
}

inline void glGetFloati_v (GLenum target, GLuint index, GLfloat *data){
  const static PFNGLGETFLOATI_VPROC glfunc = ((PFNGLGETFLOATI_VPROC)wglGetProcAddress("glGetFloati_v"));
  return glfunc ? glfunc(target, index, data) : 0;
}

inline void glGetDoublei_v (GLenum target, GLuint index, GLdouble *data){
  const static PFNGLGETDOUBLEI_VPROC glfunc = ((PFNGLGETDOUBLEI_VPROC)wglGetProcAddress("glGetDoublei_v"));
  return glfunc ? glfunc(target, index, data) : 0;
}

inline void glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance){
  const static PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glfunc = ((PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)wglGetProcAddress("glDrawArraysInstancedBaseInstance"));
  return glfunc ? glfunc(mode, first, count, instancecount, baseinstance) : 0;
}

inline void glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance){
  const static PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glfunc = ((PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)wglGetProcAddress("glDrawElementsInstancedBaseInstance"));
  return glfunc ? glfunc(mode, count, type, indices, instancecount, baseinstance) : 0;
}

inline void glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance){
  const static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glfunc = ((PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)wglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance"));
  return glfunc ? glfunc(mode, count, type, indices, instancecount, basevertex, baseinstance) : 0;
}

inline void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params){
  const static PFNGLGETINTERNALFORMATIVPROC glfunc = ((PFNGLGETINTERNALFORMATIVPROC)wglGetProcAddress("glGetInternalformativ"));
  return glfunc ? glfunc(target, internalformat, pname, bufSize, params) : 0;
}

inline void glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params){
  const static PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glfunc = ((PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)wglGetProcAddress("glGetActiveAtomicCounterBufferiv"));
  return glfunc ? glfunc(program, bufferIndex, pname, params) : 0;
}

inline void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format){
  const static PFNGLBINDIMAGETEXTUREPROC glfunc = ((PFNGLBINDIMAGETEXTUREPROC)wglGetProcAddress("glBindImageTexture"));
  return glfunc ? glfunc(unit, texture, level, layered, layer, access, format) : 0;
}

inline void glMemoryBarrier (GLbitfield barriers){
  const static PFNGLMEMORYBARRIERPROC glfunc = ((PFNGLMEMORYBARRIERPROC)wglGetProcAddress("glMemoryBarrier"));
  return glfunc ? glfunc(barriers) : 0;
}

inline void glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width){
  const static PFNGLTEXSTORAGE1DPROC glfunc = ((PFNGLTEXSTORAGE1DPROC)wglGetProcAddress("glTexStorage1D"));
  return glfunc ? glfunc(target, levels, internalformat, width) : 0;
}

inline void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){
  const static PFNGLTEXSTORAGE2DPROC glfunc = ((PFNGLTEXSTORAGE2DPROC)wglGetProcAddress("glTexStorage2D"));
  return glfunc ? glfunc(target, levels, internalformat, width, height) : 0;
}

inline void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){
  const static PFNGLTEXSTORAGE3DPROC glfunc = ((PFNGLTEXSTORAGE3DPROC)wglGetProcAddress("glTexStorage3D"));
  return glfunc ? glfunc(target, levels, internalformat, width, height, depth) : 0;
}

inline void glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount){
  const static PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glfunc = ((PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)wglGetProcAddress("glDrawTransformFeedbackInstanced"));
  return glfunc ? glfunc(mode, id, instancecount) : 0;
}

inline void glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount){
  const static PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glfunc = ((PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)wglGetProcAddress("glDrawTransformFeedbackStreamInstanced"));
  return glfunc ? glfunc(mode, id, stream, instancecount) : 0;
}

inline void glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data){
  const static PFNGLCLEARBUFFERDATAPROC glfunc = ((PFNGLCLEARBUFFERDATAPROC)wglGetProcAddress("glClearBufferData"));
  return glfunc ? glfunc(target, internalformat, format, type, data) : 0;
}

inline void glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data){
  const static PFNGLCLEARBUFFERSUBDATAPROC glfunc = ((PFNGLCLEARBUFFERSUBDATAPROC)wglGetProcAddress("glClearBufferSubData"));
  return glfunc ? glfunc(target, internalformat, offset, size, format, type, data) : 0;
}

inline void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z){
  const static PFNGLDISPATCHCOMPUTEPROC glfunc = ((PFNGLDISPATCHCOMPUTEPROC)wglGetProcAddress("glDispatchCompute"));
  return glfunc ? glfunc(num_groups_x, num_groups_y, num_groups_z) : 0;
}

inline void glDispatchComputeIndirect (GLintptr indirect){
  const static PFNGLDISPATCHCOMPUTEINDIRECTPROC glfunc = ((PFNGLDISPATCHCOMPUTEINDIRECTPROC)wglGetProcAddress("glDispatchComputeIndirect"));
  return glfunc ? glfunc(indirect) : 0;
}

inline void glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth){
  const static PFNGLCOPYIMAGESUBDATAPROC glfunc = ((PFNGLCOPYIMAGESUBDATAPROC)wglGetProcAddress("glCopyImageSubData"));
  return glfunc ? glfunc(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth) : 0;
}

inline void glFramebufferParameteri (GLenum target, GLenum pname, GLint param){
  const static PFNGLFRAMEBUFFERPARAMETERIPROC glfunc = ((PFNGLFRAMEBUFFERPARAMETERIPROC)wglGetProcAddress("glFramebufferParameteri"));
  return glfunc ? glfunc(target, pname, param) : 0;
}

inline void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params){
  const static PFNGLGETFRAMEBUFFERPARAMETERIVPROC glfunc = ((PFNGLGETFRAMEBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetFramebufferParameteriv"));
  return glfunc ? glfunc(target, pname, params) : 0;
}

inline void glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params){
  const static PFNGLGETINTERNALFORMATI64VPROC glfunc = ((PFNGLGETINTERNALFORMATI64VPROC)wglGetProcAddress("glGetInternalformati64v"));
  return glfunc ? glfunc(target, internalformat, pname, bufSize, params) : 0;
}

inline void glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth){
  const static PFNGLINVALIDATETEXSUBIMAGEPROC glfunc = ((PFNGLINVALIDATETEXSUBIMAGEPROC)wglGetProcAddress("glInvalidateTexSubImage"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, zoffset, width, height, depth) : 0;
}

inline void glInvalidateTexImage (GLuint texture, GLint level){
  const static PFNGLINVALIDATETEXIMAGEPROC glfunc = ((PFNGLINVALIDATETEXIMAGEPROC)wglGetProcAddress("glInvalidateTexImage"));
  return glfunc ? glfunc(texture, level) : 0;
}

inline void glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length){
  const static PFNGLINVALIDATEBUFFERSUBDATAPROC glfunc = ((PFNGLINVALIDATEBUFFERSUBDATAPROC)wglGetProcAddress("glInvalidateBufferSubData"));
  return glfunc ? glfunc(buffer, offset, length) : 0;
}

inline void glInvalidateBufferData (GLuint buffer){
  const static PFNGLINVALIDATEBUFFERDATAPROC glfunc = ((PFNGLINVALIDATEBUFFERDATAPROC)wglGetProcAddress("glInvalidateBufferData"));
  return glfunc ? glfunc(buffer) : 0;
}

inline void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments){
  const static PFNGLINVALIDATEFRAMEBUFFERPROC glfunc = ((PFNGLINVALIDATEFRAMEBUFFERPROC)wglGetProcAddress("glInvalidateFramebuffer"));
  return glfunc ? glfunc(target, numAttachments, attachments) : 0;
}

inline void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height){
  const static PFNGLINVALIDATESUBFRAMEBUFFERPROC glfunc = ((PFNGLINVALIDATESUBFRAMEBUFFERPROC)wglGetProcAddress("glInvalidateSubFramebuffer"));
  return glfunc ? glfunc(target, numAttachments, attachments, x, y, width, height) : 0;
}

inline void glMultiDrawArraysIndirect (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride){
  const static PFNGLMULTIDRAWARRAYSINDIRECTPROC glfunc = ((PFNGLMULTIDRAWARRAYSINDIRECTPROC)wglGetProcAddress("glMultiDrawArraysIndirect"));
  return glfunc ? glfunc(mode, indirect, drawcount, stride) : 0;
}

inline void glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride){
  const static PFNGLMULTIDRAWELEMENTSINDIRECTPROC glfunc = ((PFNGLMULTIDRAWELEMENTSINDIRECTPROC)wglGetProcAddress("glMultiDrawElementsIndirect"));
  return glfunc ? glfunc(mode, type, indirect, drawcount, stride) : 0;
}

inline void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params){
  const static PFNGLGETPROGRAMINTERFACEIVPROC glfunc = ((PFNGLGETPROGRAMINTERFACEIVPROC)wglGetProcAddress("glGetProgramInterfaceiv"));
  return glfunc ? glfunc(program, programInterface, pname, params) : 0;
}

inline GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name){
  const static PFNGLGETPROGRAMRESOURCEINDEXPROC glfunc = ((PFNGLGETPROGRAMRESOURCEINDEXPROC)wglGetProcAddress("glGetProgramResourceIndex"));
  return glfunc ? glfunc(program, programInterface, name) : 0;
}

inline void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name){
  const static PFNGLGETPROGRAMRESOURCENAMEPROC glfunc = ((PFNGLGETPROGRAMRESOURCENAMEPROC)wglGetProcAddress("glGetProgramResourceName"));
  return glfunc ? glfunc(program, programInterface, index, bufSize, length, name) : 0;
}

inline void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params){
  const static PFNGLGETPROGRAMRESOURCEIVPROC glfunc = ((PFNGLGETPROGRAMRESOURCEIVPROC)wglGetProcAddress("glGetProgramResourceiv"));
  return glfunc ? glfunc(program, programInterface, index, propCount, props, bufSize, length, params) : 0;
}

inline GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name){
  const static PFNGLGETPROGRAMRESOURCELOCATIONPROC glfunc = ((PFNGLGETPROGRAMRESOURCELOCATIONPROC)wglGetProcAddress("glGetProgramResourceLocation"));
  return glfunc ? glfunc(program, programInterface, name) : 0;
}

inline GLint glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar *name){
  const static PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glfunc = ((PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)wglGetProcAddress("glGetProgramResourceLocationIndex"));
  return glfunc ? glfunc(program, programInterface, name) : 0;
}

inline void glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding){
  const static PFNGLSHADERSTORAGEBLOCKBINDINGPROC glfunc = ((PFNGLSHADERSTORAGEBLOCKBINDINGPROC)wglGetProcAddress("glShaderStorageBlockBinding"));
  return glfunc ? glfunc(program, storageBlockIndex, storageBlockBinding) : 0;
}

inline void glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){
  const static PFNGLTEXBUFFERRANGEPROC glfunc = ((PFNGLTEXBUFFERRANGEPROC)wglGetProcAddress("glTexBufferRange"));
  return glfunc ? glfunc(target, internalformat, buffer, offset, size) : 0;
}

inline void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){
  const static PFNGLTEXSTORAGE2DMULTISAMPLEPROC glfunc = ((PFNGLTEXSTORAGE2DMULTISAMPLEPROC)wglGetProcAddress("glTexStorage2DMultisample"));
  return glfunc ? glfunc(target, samples, internalformat, width, height, fixedsamplelocations) : 0;
}

inline void glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){
  const static PFNGLTEXSTORAGE3DMULTISAMPLEPROC glfunc = ((PFNGLTEXSTORAGE3DMULTISAMPLEPROC)wglGetProcAddress("glTexStorage3DMultisample"));
  return glfunc ? glfunc(target, samples, internalformat, width, height, depth, fixedsamplelocations) : 0;
}

inline void glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers){
  const static PFNGLTEXTUREVIEWPROC glfunc = ((PFNGLTEXTUREVIEWPROC)wglGetProcAddress("glTextureView"));
  return glfunc ? glfunc(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers) : 0;
}

inline void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){
  const static PFNGLBINDVERTEXBUFFERPROC glfunc = ((PFNGLBINDVERTEXBUFFERPROC)wglGetProcAddress("glBindVertexBuffer"));
  return glfunc ? glfunc(bindingindex, buffer, offset, stride) : 0;
}

inline void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){
  const static PFNGLVERTEXATTRIBFORMATPROC glfunc = ((PFNGLVERTEXATTRIBFORMATPROC)wglGetProcAddress("glVertexAttribFormat"));
  return glfunc ? glfunc(attribindex, size, type, normalized, relativeoffset) : 0;
}

inline void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){
  const static PFNGLVERTEXATTRIBIFORMATPROC glfunc = ((PFNGLVERTEXATTRIBIFORMATPROC)wglGetProcAddress("glVertexAttribIFormat"));
  return glfunc ? glfunc(attribindex, size, type, relativeoffset) : 0;
}

inline void glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){
  const static PFNGLVERTEXATTRIBLFORMATPROC glfunc = ((PFNGLVERTEXATTRIBLFORMATPROC)wglGetProcAddress("glVertexAttribLFormat"));
  return glfunc ? glfunc(attribindex, size, type, relativeoffset) : 0;
}

inline void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex){
  const static PFNGLVERTEXATTRIBBINDINGPROC glfunc = ((PFNGLVERTEXATTRIBBINDINGPROC)wglGetProcAddress("glVertexAttribBinding"));
  return glfunc ? glfunc(attribindex, bindingindex) : 0;
}

inline void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor){
  const static PFNGLVERTEXBINDINGDIVISORPROC glfunc = ((PFNGLVERTEXBINDINGDIVISORPROC)wglGetProcAddress("glVertexBindingDivisor"));
  return glfunc ? glfunc(bindingindex, divisor) : 0;
}

inline void glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled){
  const static PFNGLDEBUGMESSAGECONTROLPROC glfunc = ((PFNGLDEBUGMESSAGECONTROLPROC)wglGetProcAddress("glDebugMessageControl"));
  return glfunc ? glfunc(source, type, severity, count, ids, enabled) : 0;
}

inline void glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf){
  const static PFNGLDEBUGMESSAGEINSERTPROC glfunc = ((PFNGLDEBUGMESSAGEINSERTPROC)wglGetProcAddress("glDebugMessageInsert"));
  return glfunc ? glfunc(source, type, id, severity, length, buf) : 0;
}

inline void glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam){
  const static PFNGLDEBUGMESSAGECALLBACKPROC glfunc = ((PFNGLDEBUGMESSAGECALLBACKPROC)wglGetProcAddress("glDebugMessageCallback"));
  return glfunc ? glfunc(callback, userParam) : 0;
}

inline GLuint glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog){
  const static PFNGLGETDEBUGMESSAGELOGPROC glfunc = ((PFNGLGETDEBUGMESSAGELOGPROC)wglGetProcAddress("glGetDebugMessageLog"));
  return glfunc ? glfunc(count, bufSize, sources, types, ids, severities, lengths, messageLog) : 0;
}

inline void glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message){
  const static PFNGLPUSHDEBUGGROUPPROC glfunc = ((PFNGLPUSHDEBUGGROUPPROC)wglGetProcAddress("glPushDebugGroup"));
  return glfunc ? glfunc(source, id, length, message) : 0;
}

inline void glPopDebugGroup (void){
  const static PFNGLPOPDEBUGGROUPPROC glfunc = ((PFNGLPOPDEBUGGROUPPROC)wglGetProcAddress("glPopDebugGroup"));
  return glfunc ? glfunc() : 0;
}

inline void glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label){
  const static PFNGLOBJECTLABELPROC glfunc = ((PFNGLOBJECTLABELPROC)wglGetProcAddress("glObjectLabel"));
  return glfunc ? glfunc(identifier, name, length, label) : 0;
}

inline void glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label){
  const static PFNGLGETOBJECTLABELPROC glfunc = ((PFNGLGETOBJECTLABELPROC)wglGetProcAddress("glGetObjectLabel"));
  return glfunc ? glfunc(identifier, name, bufSize, length, label) : 0;
}

inline void glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label){
  const static PFNGLOBJECTPTRLABELPROC glfunc = ((PFNGLOBJECTPTRLABELPROC)wglGetProcAddress("glObjectPtrLabel"));
  return glfunc ? glfunc(ptr, length, label) : 0;
}

inline void glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label){
  const static PFNGLGETOBJECTPTRLABELPROC glfunc = ((PFNGLGETOBJECTPTRLABELPROC)wglGetProcAddress("glGetObjectPtrLabel"));
  return glfunc ? glfunc(ptr, bufSize, length, label) : 0;
}

inline void glBufferStorage (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags){
  const static PFNGLBUFFERSTORAGEPROC glfunc = ((PFNGLBUFFERSTORAGEPROC)wglGetProcAddress("glBufferStorage"));
  return glfunc ? glfunc(target, size, data, flags) : 0;
}

inline void glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void *data){
  const static PFNGLCLEARTEXIMAGEPROC glfunc = ((PFNGLCLEARTEXIMAGEPROC)wglGetProcAddress("glClearTexImage"));
  return glfunc ? glfunc(texture, level, format, type, data) : 0;
}

inline void glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data){
  const static PFNGLCLEARTEXSUBIMAGEPROC glfunc = ((PFNGLCLEARTEXSUBIMAGEPROC)wglGetProcAddress("glClearTexSubImage"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data) : 0;
}

inline void glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint *buffers){
  const static PFNGLBINDBUFFERSBASEPROC glfunc = ((PFNGLBINDBUFFERSBASEPROC)wglGetProcAddress("glBindBuffersBase"));
  return glfunc ? glfunc(target, first, count, buffers) : 0;
}

inline void glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes){
  const static PFNGLBINDBUFFERSRANGEPROC glfunc = ((PFNGLBINDBUFFERSRANGEPROC)wglGetProcAddress("glBindBuffersRange"));
  return glfunc ? glfunc(target, first, count, buffers, offsets, sizes) : 0;
}

inline void glBindTextures (GLuint first, GLsizei count, const GLuint *textures){
  const static PFNGLBINDTEXTURESPROC glfunc = ((PFNGLBINDTEXTURESPROC)wglGetProcAddress("glBindTextures"));
  return glfunc ? glfunc(first, count, textures) : 0;
}

inline void glBindSamplers (GLuint first, GLsizei count, const GLuint *samplers){
  const static PFNGLBINDSAMPLERSPROC glfunc = ((PFNGLBINDSAMPLERSPROC)wglGetProcAddress("glBindSamplers"));
  return glfunc ? glfunc(first, count, samplers) : 0;
}

inline void glBindImageTextures (GLuint first, GLsizei count, const GLuint *textures){
  const static PFNGLBINDIMAGETEXTURESPROC glfunc = ((PFNGLBINDIMAGETEXTURESPROC)wglGetProcAddress("glBindImageTextures"));
  return glfunc ? glfunc(first, count, textures) : 0;
}

inline void glBindVertexBuffers (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides){
  const static PFNGLBINDVERTEXBUFFERSPROC glfunc = ((PFNGLBINDVERTEXBUFFERSPROC)wglGetProcAddress("glBindVertexBuffers"));
  return glfunc ? glfunc(first, count, buffers, offsets, strides) : 0;
}

inline void glClipControl (GLenum origin, GLenum depth){
  const static PFNGLCLIPCONTROLPROC glfunc = ((PFNGLCLIPCONTROLPROC)wglGetProcAddress("glClipControl"));
  return glfunc ? glfunc(origin, depth) : 0;
}

inline void glCreateTransformFeedbacks (GLsizei n, GLuint *ids){
  const static PFNGLCREATETRANSFORMFEEDBACKSPROC glfunc = ((PFNGLCREATETRANSFORMFEEDBACKSPROC)wglGetProcAddress("glCreateTransformFeedbacks"));
  return glfunc ? glfunc(n, ids) : 0;
}

inline void glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer){
  const static PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glfunc = ((PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)wglGetProcAddress("glTransformFeedbackBufferBase"));
  return glfunc ? glfunc(xfb, index, buffer) : 0;
}

inline void glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){
  const static PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glfunc = ((PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)wglGetProcAddress("glTransformFeedbackBufferRange"));
  return glfunc ? glfunc(xfb, index, buffer, offset, size) : 0;
}

inline void glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint *param){
  const static PFNGLGETTRANSFORMFEEDBACKIVPROC glfunc = ((PFNGLGETTRANSFORMFEEDBACKIVPROC)wglGetProcAddress("glGetTransformFeedbackiv"));
  return glfunc ? glfunc(xfb, pname, param) : 0;
}

inline void glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint *param){
  const static PFNGLGETTRANSFORMFEEDBACKI_VPROC glfunc = ((PFNGLGETTRANSFORMFEEDBACKI_VPROC)wglGetProcAddress("glGetTransformFeedbacki_v"));
  return glfunc ? glfunc(xfb, pname, index, param) : 0;
}

inline void glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 *param){
  const static PFNGLGETTRANSFORMFEEDBACKI64_VPROC glfunc = ((PFNGLGETTRANSFORMFEEDBACKI64_VPROC)wglGetProcAddress("glGetTransformFeedbacki64_v"));
  return glfunc ? glfunc(xfb, pname, index, param) : 0;
}

inline void glCreateBuffers (GLsizei n, GLuint *buffers){
  const static PFNGLCREATEBUFFERSPROC glfunc = ((PFNGLCREATEBUFFERSPROC)wglGetProcAddress("glCreateBuffers"));
  return glfunc ? glfunc(n, buffers) : 0;
}

inline void glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags){
  const static PFNGLNAMEDBUFFERSTORAGEPROC glfunc = ((PFNGLNAMEDBUFFERSTORAGEPROC)wglGetProcAddress("glNamedBufferStorage"));
  return glfunc ? glfunc(buffer, size, data, flags) : 0;
}

inline void glNamedBufferData (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage){
  const static PFNGLNAMEDBUFFERDATAPROC glfunc = ((PFNGLNAMEDBUFFERDATAPROC)wglGetProcAddress("glNamedBufferData"));
  return glfunc ? glfunc(buffer, size, data, usage) : 0;
}

inline void glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data){
  const static PFNGLNAMEDBUFFERSUBDATAPROC glfunc = ((PFNGLNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glNamedBufferSubData"));
  return glfunc ? glfunc(buffer, offset, size, data) : 0;
}

inline void glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){
  const static PFNGLCOPYNAMEDBUFFERSUBDATAPROC glfunc = ((PFNGLCOPYNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glCopyNamedBufferSubData"));
  return glfunc ? glfunc(readBuffer, writeBuffer, readOffset, writeOffset, size) : 0;
}

inline void glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data){
  const static PFNGLCLEARNAMEDBUFFERDATAPROC glfunc = ((PFNGLCLEARNAMEDBUFFERDATAPROC)wglGetProcAddress("glClearNamedBufferData"));
  return glfunc ? glfunc(buffer, internalformat, format, type, data) : 0;
}

inline void glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data){
  const static PFNGLCLEARNAMEDBUFFERSUBDATAPROC glfunc = ((PFNGLCLEARNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glClearNamedBufferSubData"));
  return glfunc ? glfunc(buffer, internalformat, offset, size, format, type, data) : 0;
}

inline void *glMapNamedBuffer (GLuint buffer, GLenum access){
  const static PFNGLMAPNAMEDBUFFERPROC glfunc = ((PFNGLMAPNAMEDBUFFERPROC)wglGetProcAddress("glMapNamedBuffer"));
  return glfunc ? glfunc(buffer, access) : 0;
}

inline void *glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access){
  const static PFNGLMAPNAMEDBUFFERRANGEPROC glfunc = ((PFNGLMAPNAMEDBUFFERRANGEPROC)wglGetProcAddress("glMapNamedBufferRange"));
  return glfunc ? glfunc(buffer, offset, length, access) : 0;
}

inline GLboolean glUnmapNamedBuffer (GLuint buffer){
  const static PFNGLUNMAPNAMEDBUFFERPROC glfunc = ((PFNGLUNMAPNAMEDBUFFERPROC)wglGetProcAddress("glUnmapNamedBuffer"));
  return glfunc ? glfunc(buffer) : 0;
}

inline void glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length){
  const static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glfunc = ((PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)wglGetProcAddress("glFlushMappedNamedBufferRange"));
  return glfunc ? glfunc(buffer, offset, length) : 0;
}

inline void glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint *params){
  const static PFNGLGETNAMEDBUFFERPARAMETERIVPROC glfunc = ((PFNGLGETNAMEDBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetNamedBufferParameteriv"));
  return glfunc ? glfunc(buffer, pname, params) : 0;
}

inline void glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 *params){
  const static PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glfunc = ((PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)wglGetProcAddress("glGetNamedBufferParameteri64v"));
  return glfunc ? glfunc(buffer, pname, params) : 0;
}

inline void glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void **params){
  const static PFNGLGETNAMEDBUFFERPOINTERVPROC glfunc = ((PFNGLGETNAMEDBUFFERPOINTERVPROC)wglGetProcAddress("glGetNamedBufferPointerv"));
  return glfunc ? glfunc(buffer, pname, params) : 0;
}

inline void glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data){
  const static PFNGLGETNAMEDBUFFERSUBDATAPROC glfunc = ((PFNGLGETNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glGetNamedBufferSubData"));
  return glfunc ? glfunc(buffer, offset, size, data) : 0;
}

inline void glCreateFramebuffers (GLsizei n, GLuint *framebuffers){
  const static PFNGLCREATEFRAMEBUFFERSPROC glfunc = ((PFNGLCREATEFRAMEBUFFERSPROC)wglGetProcAddress("glCreateFramebuffers"));
  return glfunc ? glfunc(n, framebuffers) : 0;
}

inline void glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){
  const static PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glfunc = ((PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)wglGetProcAddress("glNamedFramebufferRenderbuffer"));
  return glfunc ? glfunc(framebuffer, attachment, renderbuffertarget, renderbuffer) : 0;
}

inline void glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param){
  const static PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glfunc = ((PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)wglGetProcAddress("glNamedFramebufferParameteri"));
  return glfunc ? glfunc(framebuffer, pname, param) : 0;
}

inline void glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level){
  const static PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glfunc = ((PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)wglGetProcAddress("glNamedFramebufferTexture"));
  return glfunc ? glfunc(framebuffer, attachment, texture, level) : 0;
}

inline void glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer){
  const static PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glfunc = ((PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)wglGetProcAddress("glNamedFramebufferTextureLayer"));
  return glfunc ? glfunc(framebuffer, attachment, texture, level, layer) : 0;
}

inline void glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf){
  const static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glfunc = ((PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)wglGetProcAddress("glNamedFramebufferDrawBuffer"));
  return glfunc ? glfunc(framebuffer, buf) : 0;
}

inline void glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum *bufs){
  const static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glfunc = ((PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)wglGetProcAddress("glNamedFramebufferDrawBuffers"));
  return glfunc ? glfunc(framebuffer, n, bufs) : 0;
}

inline void glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src){
  const static PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glfunc = ((PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)wglGetProcAddress("glNamedFramebufferReadBuffer"));
  return glfunc ? glfunc(framebuffer, src) : 0;
}

inline void glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments){
  const static PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glfunc = ((PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)wglGetProcAddress("glInvalidateNamedFramebufferData"));
  return glfunc ? glfunc(framebuffer, numAttachments, attachments) : 0;
}

inline void glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height){
  const static PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glfunc = ((PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)wglGetProcAddress("glInvalidateNamedFramebufferSubData"));
  return glfunc ? glfunc(framebuffer, numAttachments, attachments, x, y, width, height) : 0;
}

inline void glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value){
  const static PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glfunc = ((PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)wglGetProcAddress("glClearNamedFramebufferiv"));
  return glfunc ? glfunc(framebuffer, buffer, drawbuffer, value) : 0;
}

inline void glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value){
  const static PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glfunc = ((PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)wglGetProcAddress("glClearNamedFramebufferuiv"));
  return glfunc ? glfunc(framebuffer, buffer, drawbuffer, value) : 0;
}

inline void glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value){
  const static PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glfunc = ((PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)wglGetProcAddress("glClearNamedFramebufferfv"));
  return glfunc ? glfunc(framebuffer, buffer, drawbuffer, value) : 0;
}

inline void glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){
  const static PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glfunc = ((PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)wglGetProcAddress("glClearNamedFramebufferfi"));
  return glfunc ? glfunc(framebuffer, buffer, drawbuffer, depth, stencil) : 0;
}

inline void glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){
  const static PFNGLBLITNAMEDFRAMEBUFFERPROC glfunc = ((PFNGLBLITNAMEDFRAMEBUFFERPROC)wglGetProcAddress("glBlitNamedFramebuffer"));
  return glfunc ? glfunc(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter) : 0;
}

inline GLenum glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target){
  const static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glfunc = ((PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckNamedFramebufferStatus"));
  return glfunc ? glfunc(framebuffer, target) : 0;
}

inline void glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint *param){
  const static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glfunc = ((PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetNamedFramebufferParameteriv"));
  return glfunc ? glfunc(framebuffer, pname, param) : 0;
}

inline void glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params){
  const static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glfunc = ((PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv"));
  return glfunc ? glfunc(framebuffer, attachment, pname, params) : 0;
}

inline void glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers){
  const static PFNGLCREATERENDERBUFFERSPROC glfunc = ((PFNGLCREATERENDERBUFFERSPROC)wglGetProcAddress("glCreateRenderbuffers"));
  return glfunc ? glfunc(n, renderbuffers) : 0;
}

inline void glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height){
  const static PFNGLNAMEDRENDERBUFFERSTORAGEPROC glfunc = ((PFNGLNAMEDRENDERBUFFERSTORAGEPROC)wglGetProcAddress("glNamedRenderbufferStorage"));
  return glfunc ? glfunc(renderbuffer, internalformat, width, height) : 0;
}

inline void glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){
  const static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glfunc = ((PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)wglGetProcAddress("glNamedRenderbufferStorageMultisample"));
  return glfunc ? glfunc(renderbuffer, samples, internalformat, width, height) : 0;
}

inline void glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint *params){
  const static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glfunc = ((PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetNamedRenderbufferParameteriv"));
  return glfunc ? glfunc(renderbuffer, pname, params) : 0;
}

inline void glCreateTextures (GLenum target, GLsizei n, GLuint *textures){
  const static PFNGLCREATETEXTURESPROC glfunc = ((PFNGLCREATETEXTURESPROC)wglGetProcAddress("glCreateTextures"));
  return glfunc ? glfunc(target, n, textures) : 0;
}

inline void glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer){
  const static PFNGLTEXTUREBUFFERPROC glfunc = ((PFNGLTEXTUREBUFFERPROC)wglGetProcAddress("glTextureBuffer"));
  return glfunc ? glfunc(texture, internalformat, buffer) : 0;
}

inline void glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){
  const static PFNGLTEXTUREBUFFERRANGEPROC glfunc = ((PFNGLTEXTUREBUFFERRANGEPROC)wglGetProcAddress("glTextureBufferRange"));
  return glfunc ? glfunc(texture, internalformat, buffer, offset, size) : 0;
}

inline void glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width){
  const static PFNGLTEXTURESTORAGE1DPROC glfunc = ((PFNGLTEXTURESTORAGE1DPROC)wglGetProcAddress("glTextureStorage1D"));
  return glfunc ? glfunc(texture, levels, internalformat, width) : 0;
}

inline void glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){
  const static PFNGLTEXTURESTORAGE2DPROC glfunc = ((PFNGLTEXTURESTORAGE2DPROC)wglGetProcAddress("glTextureStorage2D"));
  return glfunc ? glfunc(texture, levels, internalformat, width, height) : 0;
}

inline void glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){
  const static PFNGLTEXTURESTORAGE3DPROC glfunc = ((PFNGLTEXTURESTORAGE3DPROC)wglGetProcAddress("glTextureStorage3D"));
  return glfunc ? glfunc(texture, levels, internalformat, width, height, depth) : 0;
}

inline void glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){
  const static PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glfunc = ((PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)wglGetProcAddress("glTextureStorage2DMultisample"));
  return glfunc ? glfunc(texture, samples, internalformat, width, height, fixedsamplelocations) : 0;
}

inline void glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){
  const static PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glfunc = ((PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)wglGetProcAddress("glTextureStorage3DMultisample"));
  return glfunc ? glfunc(texture, samples, internalformat, width, height, depth, fixedsamplelocations) : 0;
}

inline void glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels){
  const static PFNGLTEXTURESUBIMAGE1DPROC glfunc = ((PFNGLTEXTURESUBIMAGE1DPROC)wglGetProcAddress("glTextureSubImage1D"));
  return glfunc ? glfunc(texture, level, xoffset, width, format, type, pixels) : 0;
}

inline void glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels){
  const static PFNGLTEXTURESUBIMAGE2DPROC glfunc = ((PFNGLTEXTURESUBIMAGE2DPROC)wglGetProcAddress("glTextureSubImage2D"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, width, height, format, type, pixels) : 0;
}

inline void glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels){
  const static PFNGLTEXTURESUBIMAGE3DPROC glfunc = ((PFNGLTEXTURESUBIMAGE3DPROC)wglGetProcAddress("glTextureSubImage3D"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels) : 0;
}

inline void glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glfunc = ((PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)wglGetProcAddress("glCompressedTextureSubImage1D"));
  return glfunc ? glfunc(texture, level, xoffset, width, format, imageSize, data) : 0;
}

inline void glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glfunc = ((PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)wglGetProcAddress("glCompressedTextureSubImage2D"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, width, height, format, imageSize, data) : 0;
}

inline void glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data){
  const static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glfunc = ((PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)wglGetProcAddress("glCompressedTextureSubImage3D"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data) : 0;
}

inline void glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){
  const static PFNGLCOPYTEXTURESUBIMAGE1DPROC glfunc = ((PFNGLCOPYTEXTURESUBIMAGE1DPROC)wglGetProcAddress("glCopyTextureSubImage1D"));
  return glfunc ? glfunc(texture, level, xoffset, x, y, width) : 0;
}

inline void glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){
  const static PFNGLCOPYTEXTURESUBIMAGE2DPROC glfunc = ((PFNGLCOPYTEXTURESUBIMAGE2DPROC)wglGetProcAddress("glCopyTextureSubImage2D"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, x, y, width, height) : 0;
}

inline void glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){
  const static PFNGLCOPYTEXTURESUBIMAGE3DPROC glfunc = ((PFNGLCOPYTEXTURESUBIMAGE3DPROC)wglGetProcAddress("glCopyTextureSubImage3D"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, zoffset, x, y, width, height) : 0;
}

inline void glTextureParameterf (GLuint texture, GLenum pname, GLfloat param){
  const static PFNGLTEXTUREPARAMETERFPROC glfunc = ((PFNGLTEXTUREPARAMETERFPROC)wglGetProcAddress("glTextureParameterf"));
  return glfunc ? glfunc(texture, pname, param) : 0;
}

inline void glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat *param){
  const static PFNGLTEXTUREPARAMETERFVPROC glfunc = ((PFNGLTEXTUREPARAMETERFVPROC)wglGetProcAddress("glTextureParameterfv"));
  return glfunc ? glfunc(texture, pname, param) : 0;
}

inline void glTextureParameteri (GLuint texture, GLenum pname, GLint param){
  const static PFNGLTEXTUREPARAMETERIPROC glfunc = ((PFNGLTEXTUREPARAMETERIPROC)wglGetProcAddress("glTextureParameteri"));
  return glfunc ? glfunc(texture, pname, param) : 0;
}

inline void glTextureParameterIiv (GLuint texture, GLenum pname, const GLint *params){
  const static PFNGLTEXTUREPARAMETERIIVPROC glfunc = ((PFNGLTEXTUREPARAMETERIIVPROC)wglGetProcAddress("glTextureParameterIiv"));
  return glfunc ? glfunc(texture, pname, params) : 0;
}

inline void glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint *params){
  const static PFNGLTEXTUREPARAMETERIUIVPROC glfunc = ((PFNGLTEXTUREPARAMETERIUIVPROC)wglGetProcAddress("glTextureParameterIuiv"));
  return glfunc ? glfunc(texture, pname, params) : 0;
}

inline void glTextureParameteriv (GLuint texture, GLenum pname, const GLint *param){
  const static PFNGLTEXTUREPARAMETERIVPROC glfunc = ((PFNGLTEXTUREPARAMETERIVPROC)wglGetProcAddress("glTextureParameteriv"));
  return glfunc ? glfunc(texture, pname, param) : 0;
}

inline void glGenerateTextureMipmap (GLuint texture){
  const static PFNGLGENERATETEXTUREMIPMAPPROC glfunc = ((PFNGLGENERATETEXTUREMIPMAPPROC)wglGetProcAddress("glGenerateTextureMipmap"));
  return glfunc ? glfunc(texture) : 0;
}

inline void glBindTextureUnit (GLuint unit, GLuint texture){
  const static PFNGLBINDTEXTUREUNITPROC glfunc = ((PFNGLBINDTEXTUREUNITPROC)wglGetProcAddress("glBindTextureUnit"));
  return glfunc ? glfunc(unit, texture) : 0;
}

inline void glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels){
  const static PFNGLGETTEXTUREIMAGEPROC glfunc = ((PFNGLGETTEXTUREIMAGEPROC)wglGetProcAddress("glGetTextureImage"));
  return glfunc ? glfunc(texture, level, format, type, bufSize, pixels) : 0;
}

inline void glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void *pixels){
  const static PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glfunc = ((PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)wglGetProcAddress("glGetCompressedTextureImage"));
  return glfunc ? glfunc(texture, level, bufSize, pixels) : 0;
}

inline void glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat *params){
  const static PFNGLGETTEXTURELEVELPARAMETERFVPROC glfunc = ((PFNGLGETTEXTURELEVELPARAMETERFVPROC)wglGetProcAddress("glGetTextureLevelParameterfv"));
  return glfunc ? glfunc(texture, level, pname, params) : 0;
}

inline void glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint *params){
  const static PFNGLGETTEXTURELEVELPARAMETERIVPROC glfunc = ((PFNGLGETTEXTURELEVELPARAMETERIVPROC)wglGetProcAddress("glGetTextureLevelParameteriv"));
  return glfunc ? glfunc(texture, level, pname, params) : 0;
}

inline void glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat *params){
  const static PFNGLGETTEXTUREPARAMETERFVPROC glfunc = ((PFNGLGETTEXTUREPARAMETERFVPROC)wglGetProcAddress("glGetTextureParameterfv"));
  return glfunc ? glfunc(texture, pname, params) : 0;
}

inline void glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint *params){
  const static PFNGLGETTEXTUREPARAMETERIIVPROC glfunc = ((PFNGLGETTEXTUREPARAMETERIIVPROC)wglGetProcAddress("glGetTextureParameterIiv"));
  return glfunc ? glfunc(texture, pname, params) : 0;
}

inline void glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint *params){
  const static PFNGLGETTEXTUREPARAMETERIUIVPROC glfunc = ((PFNGLGETTEXTUREPARAMETERIUIVPROC)wglGetProcAddress("glGetTextureParameterIuiv"));
  return glfunc ? glfunc(texture, pname, params) : 0;
}

inline void glGetTextureParameteriv (GLuint texture, GLenum pname, GLint *params){
  const static PFNGLGETTEXTUREPARAMETERIVPROC glfunc = ((PFNGLGETTEXTUREPARAMETERIVPROC)wglGetProcAddress("glGetTextureParameteriv"));
  return glfunc ? glfunc(texture, pname, params) : 0;
}

inline void glCreateVertexArrays (GLsizei n, GLuint *arrays){
  const static PFNGLCREATEVERTEXARRAYSPROC glfunc = ((PFNGLCREATEVERTEXARRAYSPROC)wglGetProcAddress("glCreateVertexArrays"));
  return glfunc ? glfunc(n, arrays) : 0;
}

inline void glDisableVertexArrayAttrib (GLuint vaobj, GLuint index){
  const static PFNGLDISABLEVERTEXARRAYATTRIBPROC glfunc = ((PFNGLDISABLEVERTEXARRAYATTRIBPROC)wglGetProcAddress("glDisableVertexArrayAttrib"));
  return glfunc ? glfunc(vaobj, index) : 0;
}

inline void glEnableVertexArrayAttrib (GLuint vaobj, GLuint index){
  const static PFNGLENABLEVERTEXARRAYATTRIBPROC glfunc = ((PFNGLENABLEVERTEXARRAYATTRIBPROC)wglGetProcAddress("glEnableVertexArrayAttrib"));
  return glfunc ? glfunc(vaobj, index) : 0;
}

inline void glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer){
  const static PFNGLVERTEXARRAYELEMENTBUFFERPROC glfunc = ((PFNGLVERTEXARRAYELEMENTBUFFERPROC)wglGetProcAddress("glVertexArrayElementBuffer"));
  return glfunc ? glfunc(vaobj, buffer) : 0;
}

inline void glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){
  const static PFNGLVERTEXARRAYVERTEXBUFFERPROC glfunc = ((PFNGLVERTEXARRAYVERTEXBUFFERPROC)wglGetProcAddress("glVertexArrayVertexBuffer"));
  return glfunc ? glfunc(vaobj, bindingindex, buffer, offset, stride) : 0;
}

inline void glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides){
  const static PFNGLVERTEXARRAYVERTEXBUFFERSPROC glfunc = ((PFNGLVERTEXARRAYVERTEXBUFFERSPROC)wglGetProcAddress("glVertexArrayVertexBuffers"));
  return glfunc ? glfunc(vaobj, first, count, buffers, offsets, strides) : 0;
}

inline void glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex){
  const static PFNGLVERTEXARRAYATTRIBBINDINGPROC glfunc = ((PFNGLVERTEXARRAYATTRIBBINDINGPROC)wglGetProcAddress("glVertexArrayAttribBinding"));
  return glfunc ? glfunc(vaobj, attribindex, bindingindex) : 0;
}

inline void glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){
  const static PFNGLVERTEXARRAYATTRIBFORMATPROC glfunc = ((PFNGLVERTEXARRAYATTRIBFORMATPROC)wglGetProcAddress("glVertexArrayAttribFormat"));
  return glfunc ? glfunc(vaobj, attribindex, size, type, normalized, relativeoffset) : 0;
}

inline void glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){
  const static PFNGLVERTEXARRAYATTRIBIFORMATPROC glfunc = ((PFNGLVERTEXARRAYATTRIBIFORMATPROC)wglGetProcAddress("glVertexArrayAttribIFormat"));
  return glfunc ? glfunc(vaobj, attribindex, size, type, relativeoffset) : 0;
}

inline void glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){
  const static PFNGLVERTEXARRAYATTRIBLFORMATPROC glfunc = ((PFNGLVERTEXARRAYATTRIBLFORMATPROC)wglGetProcAddress("glVertexArrayAttribLFormat"));
  return glfunc ? glfunc(vaobj, attribindex, size, type, relativeoffset) : 0;
}

inline void glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor){
  const static PFNGLVERTEXARRAYBINDINGDIVISORPROC glfunc = ((PFNGLVERTEXARRAYBINDINGDIVISORPROC)wglGetProcAddress("glVertexArrayBindingDivisor"));
  return glfunc ? glfunc(vaobj, bindingindex, divisor) : 0;
}

inline void glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint *param){
  const static PFNGLGETVERTEXARRAYIVPROC glfunc = ((PFNGLGETVERTEXARRAYIVPROC)wglGetProcAddress("glGetVertexArrayiv"));
  return glfunc ? glfunc(vaobj, pname, param) : 0;
}

inline void glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint *param){
  const static PFNGLGETVERTEXARRAYINDEXEDIVPROC glfunc = ((PFNGLGETVERTEXARRAYINDEXEDIVPROC)wglGetProcAddress("glGetVertexArrayIndexediv"));
  return glfunc ? glfunc(vaobj, index, pname, param) : 0;
}

inline void glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param){
  const static PFNGLGETVERTEXARRAYINDEXED64IVPROC glfunc = ((PFNGLGETVERTEXARRAYINDEXED64IVPROC)wglGetProcAddress("glGetVertexArrayIndexed64iv"));
  return glfunc ? glfunc(vaobj, index, pname, param) : 0;
}

inline void glCreateSamplers (GLsizei n, GLuint *samplers){
  const static PFNGLCREATESAMPLERSPROC glfunc = ((PFNGLCREATESAMPLERSPROC)wglGetProcAddress("glCreateSamplers"));
  return glfunc ? glfunc(n, samplers) : 0;
}

inline void glCreateProgramPipelines (GLsizei n, GLuint *pipelines){
  const static PFNGLCREATEPROGRAMPIPELINESPROC glfunc = ((PFNGLCREATEPROGRAMPIPELINESPROC)wglGetProcAddress("glCreateProgramPipelines"));
  return glfunc ? glfunc(n, pipelines) : 0;
}

inline void glCreateQueries (GLenum target, GLsizei n, GLuint *ids){
  const static PFNGLCREATEQUERIESPROC glfunc = ((PFNGLCREATEQUERIESPROC)wglGetProcAddress("glCreateQueries"));
  return glfunc ? glfunc(target, n, ids) : 0;
}

inline void glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){
  const static PFNGLGETQUERYBUFFEROBJECTI64VPROC glfunc = ((PFNGLGETQUERYBUFFEROBJECTI64VPROC)wglGetProcAddress("glGetQueryBufferObjecti64v"));
  return glfunc ? glfunc(id, buffer, pname, offset) : 0;
}

inline void glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){
  const static PFNGLGETQUERYBUFFEROBJECTIVPROC glfunc = ((PFNGLGETQUERYBUFFEROBJECTIVPROC)wglGetProcAddress("glGetQueryBufferObjectiv"));
  return glfunc ? glfunc(id, buffer, pname, offset) : 0;
}

inline void glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){
  const static PFNGLGETQUERYBUFFEROBJECTUI64VPROC glfunc = ((PFNGLGETQUERYBUFFEROBJECTUI64VPROC)wglGetProcAddress("glGetQueryBufferObjectui64v"));
  return glfunc ? glfunc(id, buffer, pname, offset) : 0;
}

inline void glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){
  const static PFNGLGETQUERYBUFFEROBJECTUIVPROC glfunc = ((PFNGLGETQUERYBUFFEROBJECTUIVPROC)wglGetProcAddress("glGetQueryBufferObjectuiv"));
  return glfunc ? glfunc(id, buffer, pname, offset) : 0;
}

inline void glMemoryBarrierByRegion (GLbitfield barriers){
  const static PFNGLMEMORYBARRIERBYREGIONPROC glfunc = ((PFNGLMEMORYBARRIERBYREGIONPROC)wglGetProcAddress("glMemoryBarrierByRegion"));
  return glfunc ? glfunc(barriers) : 0;
}

inline void glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels){
  const static PFNGLGETTEXTURESUBIMAGEPROC glfunc = ((PFNGLGETTEXTURESUBIMAGEPROC)wglGetProcAddress("glGetTextureSubImage"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels) : 0;
}

inline void glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels){
  const static PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glfunc = ((PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)wglGetProcAddress("glGetCompressedTextureSubImage"));
  return glfunc ? glfunc(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels) : 0;
}

inline GLenum glGetGraphicsResetStatus (void){
  const static PFNGLGETGRAPHICSRESETSTATUSPROC glfunc = ((PFNGLGETGRAPHICSRESETSTATUSPROC)wglGetProcAddress("glGetGraphicsResetStatus"));
  return glfunc ? glfunc() : 0;
}

inline void glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void *pixels){
  const static PFNGLGETNCOMPRESSEDTEXIMAGEPROC glfunc = ((PFNGLGETNCOMPRESSEDTEXIMAGEPROC)wglGetProcAddress("glGetnCompressedTexImage"));
  return glfunc ? glfunc(target, lod, bufSize, pixels) : 0;
}

inline void glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels){
  const static PFNGLGETNTEXIMAGEPROC glfunc = ((PFNGLGETNTEXIMAGEPROC)wglGetProcAddress("glGetnTexImage"));
  return glfunc ? glfunc(target, level, format, type, bufSize, pixels) : 0;
}

inline void glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble *params){
  const static PFNGLGETNUNIFORMDVPROC glfunc = ((PFNGLGETNUNIFORMDVPROC)wglGetProcAddress("glGetnUniformdv"));
  return glfunc ? glfunc(program, location, bufSize, params) : 0;
}

inline void glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params){
  const static PFNGLGETNUNIFORMFVPROC glfunc = ((PFNGLGETNUNIFORMFVPROC)wglGetProcAddress("glGetnUniformfv"));
  return glfunc ? glfunc(program, location, bufSize, params) : 0;
}

inline void glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params){
  const static PFNGLGETNUNIFORMIVPROC glfunc = ((PFNGLGETNUNIFORMIVPROC)wglGetProcAddress("glGetnUniformiv"));
  return glfunc ? glfunc(program, location, bufSize, params) : 0;
}

inline void glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params){
  const static PFNGLGETNUNIFORMUIVPROC glfunc = ((PFNGLGETNUNIFORMUIVPROC)wglGetProcAddress("glGetnUniformuiv"));
  return glfunc ? glfunc(program, location, bufSize, params) : 0;
}

inline void glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data){
  const static PFNGLREADNPIXELSPROC glfunc = ((PFNGLREADNPIXELSPROC)wglGetProcAddress("glReadnPixels"));
  return glfunc ? glfunc(x, y, width, height, format, type, bufSize, data) : 0;
}

inline void glGetnMapdv (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v){
  const static PFNGLGETNMAPDVPROC glfunc = ((PFNGLGETNMAPDVPROC)wglGetProcAddress("glGetnMapdv"));
  return glfunc ? glfunc(target, query, bufSize, v) : 0;
}

inline void glGetnMapfv (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v){
  const static PFNGLGETNMAPFVPROC glfunc = ((PFNGLGETNMAPFVPROC)wglGetProcAddress("glGetnMapfv"));
  return glfunc ? glfunc(target, query, bufSize, v) : 0;
}

inline void glGetnMapiv (GLenum target, GLenum query, GLsizei bufSize, GLint *v){
  const static PFNGLGETNMAPIVPROC glfunc = ((PFNGLGETNMAPIVPROC)wglGetProcAddress("glGetnMapiv"));
  return glfunc ? glfunc(target, query, bufSize, v) : 0;
}

inline void glGetnPixelMapfv (GLenum map, GLsizei bufSize, GLfloat *values){
  const static PFNGLGETNPIXELMAPFVPROC glfunc = ((PFNGLGETNPIXELMAPFVPROC)wglGetProcAddress("glGetnPixelMapfv"));
  return glfunc ? glfunc(map, bufSize, values) : 0;
}

inline void glGetnPixelMapuiv (GLenum map, GLsizei bufSize, GLuint *values){
  const static PFNGLGETNPIXELMAPUIVPROC glfunc = ((PFNGLGETNPIXELMAPUIVPROC)wglGetProcAddress("glGetnPixelMapuiv"));
  return glfunc ? glfunc(map, bufSize, values) : 0;
}

inline void glGetnPixelMapusv (GLenum map, GLsizei bufSize, GLushort *values){
  const static PFNGLGETNPIXELMAPUSVPROC glfunc = ((PFNGLGETNPIXELMAPUSVPROC)wglGetProcAddress("glGetnPixelMapusv"));
  return glfunc ? glfunc(map, bufSize, values) : 0;
}

inline void glGetnPolygonStipple (GLsizei bufSize, GLubyte *pattern){
  const static PFNGLGETNPOLYGONSTIPPLEPROC glfunc = ((PFNGLGETNPOLYGONSTIPPLEPROC)wglGetProcAddress("glGetnPolygonStipple"));
  return glfunc ? glfunc(bufSize, pattern) : 0;
}

inline void glGetnColorTable (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table){
  const static PFNGLGETNCOLORTABLEPROC glfunc = ((PFNGLGETNCOLORTABLEPROC)wglGetProcAddress("glGetnColorTable"));
  return glfunc ? glfunc(target, format, type, bufSize, table) : 0;
}

inline void glGetnConvolutionFilter (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image){
  const static PFNGLGETNCONVOLUTIONFILTERPROC glfunc = ((PFNGLGETNCONVOLUTIONFILTERPROC)wglGetProcAddress("glGetnConvolutionFilter"));
  return glfunc ? glfunc(target, format, type, bufSize, image) : 0;
}

inline void glGetnSeparableFilter (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span){
  const static PFNGLGETNSEPARABLEFILTERPROC glfunc = ((PFNGLGETNSEPARABLEFILTERPROC)wglGetProcAddress("glGetnSeparableFilter"));
  return glfunc ? glfunc(target, format, type, rowBufSize, row, columnBufSize, column, span) : 0;
}

inline void glGetnHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values){
  const static PFNGLGETNHISTOGRAMPROC glfunc = ((PFNGLGETNHISTOGRAMPROC)wglGetProcAddress("glGetnHistogram"));
  return glfunc ? glfunc(target, reset, format, type, bufSize, values) : 0;
}

inline void glGetnMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values){
  const static PFNGLGETNMINMAXPROC glfunc = ((PFNGLGETNMINMAXPROC)wglGetProcAddress("glGetnMinmax"));
  return glfunc ? glfunc(target, reset, format, type, bufSize, values) : 0;
}

inline void glTextureBarrier (void){
  const static PFNGLTEXTUREBARRIERPROC glfunc = ((PFNGLTEXTUREBARRIERPROC)wglGetProcAddress("glTextureBarrier"));
  return glfunc ? glfunc() : 0;
}

inline void glSpecializeShader (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue){
  const static PFNGLSPECIALIZESHADERPROC glfunc = ((PFNGLSPECIALIZESHADERPROC)wglGetProcAddress("glSpecializeShader"));
  return glfunc ? glfunc(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue) : 0;
}

inline void glMultiDrawArraysIndirectCount (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){
  const static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glfunc = ((PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC)wglGetProcAddress("glMultiDrawArraysIndirectCount"));
  return glfunc ? glfunc(mode, indirect, drawcount, maxdrawcount, stride) : 0;
}

inline void glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){
  const static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glfunc = ((PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC)wglGetProcAddress("glMultiDrawElementsIndirectCount"));
  return glfunc ? glfunc(mode, type, indirect, drawcount, maxdrawcount, stride) : 0;
}

inline void glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp){
  const static PFNGLPOLYGONOFFSETCLAMPPROC glfunc = ((PFNGLPOLYGONOFFSETCLAMPPROC)wglGetProcAddress("glPolygonOffsetClamp"));
  return glfunc ? glfunc(factor, units, clamp) : 0;
}
