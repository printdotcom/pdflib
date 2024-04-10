
#line 1 "cgo-builtin-prolog"
#include <stddef.h>

/* Define intgo when compiling with GCC.  */
typedef ptrdiff_t intgo;

#define GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; intgo n; } _GoString_;
typedef struct { char *p; intgo n; intgo c; } _GoBytes_;
_GoString_ GoString(char *p);
_GoString_ GoStringN(char *p, int l);
_GoBytes_ GoBytes(void *p, int n);
char *CString(_GoString_);
void *CBytes(_GoBytes_);
void *_CMalloc(size_t);

__attribute__ ((unused))
static size_t _GoStringLen(_GoString_ s) { return (size_t)s.n; }

__attribute__ ((unused))
static const char *_GoStringPtr(_GoString_ s) { return s.p; }

#line 19 "/home/athul/pdflib/pdflib10/generated.go"
 #include <stdio.h>
 #include <stdlib.h>
 #include "golang.h"
 #include "pdflib.h"

#line 1 "cgo-generated-wrapper"


#line 1 "cgo-gcc-prolog"
/*
  If x and y are not equal, the type will be invalid
  (have a negative array count) and an inscrutable error will come
  out of the compiler and hopefully mention "name".
*/
#define __cgo_compile_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2UL+1UL];

/* Check at compile time that the sizes we use match our expectations. */
#define __cgo_size_assert(t, n) __cgo_compile_assert_eq(sizeof(t), (size_t)n, _cgo_sizeof_##t##_is_not_##n)

__cgo_size_assert(char, 1)
__cgo_size_assert(short, 2)
__cgo_size_assert(int, 4)
typedef long long __cgo_long_long;
__cgo_size_assert(__cgo_long_long, 8)
__cgo_size_assert(float, 4)
__cgo_size_assert(double, 8)

extern char* _cgo_topofstack(void);

/*
  We use packed structs, but they are always aligned.
  The pragmas and address-of-packed-member are only recognized as warning
  groups in clang 4.0+, so ignore unknown pragmas first.
*/
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Waddress-of-packed-member"

#include <errno.h>
#include <string.h>


#define CGO_NO_SANITIZE_THREAD
#define _cgo_tsan_acquire()
#define _cgo_tsan_release()


#define _cgo_msan_write(addr, sz)

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc_PDF_get_buffer(void *v)
{
	struct {
		PDF* p0;
		long int* p1;
		char const* r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = (__typeof__(_cgo_a->r)) PDF_get_buffer(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc_PDF_new(void *v)
{
	struct {
		PDF* r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = (__typeof__(_cgo_a->r)) PDF_new();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_add_nameddest(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_add_nameddest(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_add_path_point(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
		double p3;
		char const* p4;
		char const* p5;
		int r;
		char __pad52[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_add_path_point(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_add_table_cell(void *v)
{
	struct {
		PDF* p0;
		int p1;
		int p2;
		int p3;
		char __pad20[4];
		char const* p4;
		int p5;
		char __pad36[4];
		char const* p6;
		int r;
		char __pad52[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_add_table_cell(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_add_textflow(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		int p3;
		char __pad28[4];
		char const* p4;
		int r;
		char __pad44[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_add_textflow(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_add_thumbnail(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_add_thumbnail(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_align(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_align(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_arc(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		double p5;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_arc(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_arcn(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		double p5;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_arcn(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_document(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_begin_document(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_font(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		double p3;
		double p4;
		double p5;
		double p6;
		double p7;
		double p8;
		char const* p9;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_begin_font(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6, _cgo_a->p7, _cgo_a->p8, _cgo_a->p9);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_glyph(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		double p2;
		double p3;
		double p4;
		double p5;
		double p6;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_begin_glyph(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_item(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
		int r;
		char __pad28[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_begin_item(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_layer(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_begin_layer(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_page_ext(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		char const* p3;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_begin_page_ext(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_pattern(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		int p5;
		char __pad44[4];
		int r;
		char __pad52[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_begin_pattern(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_begin_template_ext(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_begin_template_ext(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_circle(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_circle(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_circular_arc(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_circular_arc(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_clip(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_clip(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_close_font(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_close_font(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_close_graphics(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_close_graphics(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_close_image(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_close_image(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_close_pdi_document(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_close_pdi_document(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_close_pdi_page(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_close_pdi_page(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_closepath(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_closepath(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_closepath_fill_stroke(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_closepath_fill_stroke(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_closepath_stroke(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_closepath_stroke(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_concat(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		double p5;
		double p6;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_concat(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_continue_text(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_continue_text(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_3dview(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_create_3dview(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_action(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
		int r;
		char __pad28[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_create_action(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_annotation(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		char const* p5;
		char const* p6;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_create_annotation(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_bookmark(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_create_bookmark(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_field(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		char const* p5;
		int p6;
		char __pad52[4];
		char const* p7;
		char const* p8;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_create_field(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6, _cgo_a->p7, _cgo_a->p8);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_fieldgroup(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_create_fieldgroup(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_gstate(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int r;
		char __pad20[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_create_gstate(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_pvf(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		const void* p3;
		size_t p4;
		char const* p5;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_create_pvf(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_create_textflow(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_create_textflow(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_curveto(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		double p5;
		double p6;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_curveto(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_define_layer(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_define_layer(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_delete(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_delete(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_delete_path(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_delete_path(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_delete_pvf(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		int r;
		char __pad28[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_delete_pvf(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_delete_table(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_delete_table(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_delete_textflow(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_delete_textflow(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_draw_path(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
		double p3;
		char const* p4;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_draw_path(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_ellipse(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_ellipse(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_document(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_document(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_font(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_font(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_glyph(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_glyph(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_item(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_item(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_layer(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_layer(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_mc(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_mc(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_page_ext(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_page_ext(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_pattern(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_pattern(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_end_template_ext(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_end_template_ext(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_endpath(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_endpath(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fill(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_fill(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fill_imageblock(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		int p3;
		char __pad28[4];
		char const* p4;
		int r;
		char __pad44[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_fill_imageblock(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fill_pdfblock(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		int p3;
		char __pad28[4];
		char const* p4;
		int r;
		char __pad44[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_fill_pdfblock(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fill_stroke(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_fill_stroke(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fill_textblock(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		char const* p3;
		int p4;
		char __pad36[4];
		char const* p5;
		int r;
		char __pad52[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_fill_textblock(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fit_graphics(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
		double p3;
		char const* p4;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_fit_graphics(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fit_image(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
		double p3;
		char const* p4;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_fit_image(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fit_pdi_page(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
		double p3;
		char const* p4;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_fit_pdi_page(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fit_table(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
		double p3;
		double p4;
		double p5;
		char const* p6;
		char const* r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = (__typeof__(_cgo_a->r)) _PDF_fit_table(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fit_textflow(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
		double p3;
		double p4;
		double p5;
		char const* p6;
		char const* r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = (__typeof__(_cgo_a->r)) _PDF_fit_textflow(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_fit_textline(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		double p3;
		double p4;
		char const* p5;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_fit_textline(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_get_errmsg(void *v)
{
	struct {
		PDF* p0;
		char const* r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = (__typeof__(_cgo_a->r)) _PDF_get_errmsg(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_get_errnum(void *v)
{
	struct {
		PDF* p0;
		int r;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_get_errnum(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_get_parameter(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		double p2;
		char const* r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = (__typeof__(_cgo_a->r)) _PDF_get_parameter(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_get_value(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		double p2;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_get_value(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_font(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		char const* p3;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_font(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_graphics(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		char const* p3;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_graphics(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_image(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		char const* p3;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_image(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_matchbox(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		int p3;
		char const* p4;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_matchbox(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_path(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		char const* p3;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_path(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_pdi_page(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		char const* p3;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_pdi_page(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_table(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_table(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_textflow(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_textflow(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_info_textline(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		char const* p4;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_info_textline(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_initgraphics(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_initgraphics(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_lineto(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_lineto(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_load_3ddata(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_load_3ddata(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_load_font(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		char const* p4;
		int r;
		char __pad44[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_load_font(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_load_graphics(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
		int p3;
		char __pad28[4];
		char const* p4;
		int r;
		char __pad44[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_load_graphics(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_load_iccprofile(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_load_iccprofile(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_load_image(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
		int p3;
		char __pad28[4];
		char const* p4;
		int r;
		char __pad44[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_load_image(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_makespotcolor(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		int r;
		char __pad28[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_makespotcolor(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_mc_point(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_mc_point(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_moveto(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_moveto(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_open_pdi_document(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		char const* p3;
		int r;
		char __pad36[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_open_pdi_document(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_open_pdi_page(void *v)
{
	struct {
		PDF* p0;
		int p1;
		int p2;
		char const* p3;
		int r;
		char __pad28[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_open_pdi_page(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_pcos_get_number(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_pcos_get_number(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_pcos_get_string(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		char const* r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = (__typeof__(_cgo_a->r)) _PDF_pcos_get_string(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_poca_delete(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_poca_delete(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_poca_insert(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_poca_insert(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_poca_new(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int r;
		char __pad20[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_poca_new(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_poca_remove(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_poca_remove(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_process_pdi(void *v)
{
	struct {
		PDF* p0;
		int p1;
		int p2;
		char const* p3;
		int r;
		char __pad28[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_process_pdi(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_rcurveto(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		double p5;
		double p6;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_rcurveto(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_rect(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_rect(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_restore(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_restore(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_resume_page(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_resume_page(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_rotate(void *v)
{
	struct {
		PDF* p0;
		double p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_rotate(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_save(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_save(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_scale(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_scale(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_graphics_option(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_graphics_option(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_gstate(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_gstate(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_info(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_info(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_layer_dependency(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_layer_dependency(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_option(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_option(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_parameter(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_parameter(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_text_pos(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_text_pos(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_set_value(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_set_value(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setcolor(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		char const* p2;
		double p3;
		double p4;
		double p5;
		double p6;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setcolor(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setdash(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setdash(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setdashpattern(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setdashpattern(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setflat(void *v)
{
	struct {
		PDF* p0;
		double p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setflat(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setfont(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setfont(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setlinecap(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setlinecap(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setlinejoin(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setlinejoin(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setlinewidth(void *v)
{
	struct {
		PDF* p0;
		double p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setlinewidth(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setmatrix(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
		double p3;
		double p4;
		double p5;
		double p6;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setmatrix(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_setmiterlimit(void *v)
{
	struct {
		PDF* p0;
		double p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_setmiterlimit(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_shading(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		double p2;
		double p3;
		double p4;
		double p5;
		double p6;
		double p7;
		double p8;
		double p9;
		char const* p10;
		int r;
		char __pad92[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_shading(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3, _cgo_a->p4, _cgo_a->p5, _cgo_a->p6, _cgo_a->p7, _cgo_a->p8, _cgo_a->p9, _cgo_a->p10);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_shading_pattern(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
		char const* p2;
		int r;
		char __pad28[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_shading_pattern(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_shfill(void *v)
{
	struct {
		PDF* p0;
		int p1;
		char __pad12[4];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_shfill(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_show(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_show(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_show_xy(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		double p2;
		double p3;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_show_xy(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_skew(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_skew(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_stringwidth(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
		int p2;
		char __pad20[4];
		double p3;
		double r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _PDF_stringwidth(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2, _cgo_a->p3);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_stroke(void *v)
{
	struct {
		PDF* p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_stroke(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_suspend_page(void *v)
{
	struct {
		PDF* p0;
		char const* p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_suspend_page(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_5cb37de88943_Cfunc__PDF_translate(void *v)
{
	struct {
		PDF* p0;
		double p1;
		double p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_PDF_translate(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

