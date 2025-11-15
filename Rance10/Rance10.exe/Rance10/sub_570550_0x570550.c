// 函数: sub_570550
// 地址: 0x570550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_9c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg1[1]

for (int32_t* i = *arg1; i != edi; i = &i[0x15])
    (*(*i + 0x1c))(0)

arg1[1] = *arg1
arg1[4] = arg1[3]
void* result_1 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_8_1 = 0
int64_t var_2c = 0x3f800000
int64_t xmm0 = _mm_unpacklo_ps(0x3f800000, 0)
int32_t var_50 = 0
int32_t var_40 = 0
int32_t var_3c = 0xff808080
int32_t var_4c = 0xff808080
int128_t var_88 = _mm_unpacklo_ps(zx.o(0), 0).o
int128_t var_78 = xmm0.o
sub_571030(&result_1, &var_88)
var_78.q = _mm_unpacklo_ps(0x3dcccccd, 0xbdcccccd)
var_78:8.d = 0
int32_t var_50_1 = 0
int32_t var_4c_1 = 0xff00ff00
var_78:0xc.d = 0xff00ff00
int128_t var_68 = _mm_unpacklo_ps(0x3dcccccd, 0x3dcccccd).o
int64_t var_24 = 0x3dcccccd
int64_t var_58_1
var_58_1.o = var_78
sub_571030(&result_1, &var_68)
uint128_t xmm1 = zx.o(var_24)
int64_t xmm0_9 = _mm_unpacklo_ps(xmm1, 0)
int32_t var_50_2 = 0xbdcccccd
var_78.q = _mm_unpacklo_ps(xmm1, 0)
var_78:8.d = 0x3dcccccd
var_78:0xc.d = 0xff0000ff
int32_t var_4c_2 = 0xff0000ff
var_88 = var_78
int128_t var_78_1 = xmm0_9.o
sub_571030(&result_1, &var_88)
uint128_t xmm1_1 = zx.o(var_24)
int64_t xmm0_15 = _mm_unpacklo_ps(xmm1_1, xmm1_1)
int32_t var_50_3 = 0
var_78_1.q = _mm_unpacklo_ps(zx.o(0), 0)
var_78_1:8.d = 0
var_78_1:0xc.d = 0xff808080
int32_t var_4c_3 = 0xff808080
var_88 = var_78_1
int128_t var_78_2 = xmm0_15.o
sub_571030(&result_1, &var_88)
uint128_t xmm1_2 = zx.o(var_24)
int64_t xmm0_20 = _mm_unpacklo_ps(var_2c.d, 0)
int32_t var_50_4 = 0
var_78_2.q = _mm_unpacklo_ps(xmm1_2, xmm1_2)
var_78_2:8.d = 0
var_78_2:0xc.d = 0xff808080
int32_t var_4c_4 = 0xff808080
var_88 = var_78_2
int128_t var_78_3 = xmm0_20.o
sub_571030(&result_1, &var_88)
int64_t xmm0_26 = _mm_unpacklo_ps(var_24.d, 0xbdcccccd)
int32_t var_50_5 = 0
var_78_3.q = _mm_unpacklo_ps(zx.o(0), 0)
var_78_3:8.d = 0
var_78_3:0xc.d = 0xff808080
int32_t var_4c_5 = 0xff808080
var_88 = var_78_3
int128_t var_78_4 = xmm0_26.o
sub_571030(&result_1, &var_88)
int64_t xmm0_31 = _mm_unpacklo_ps(var_2c.d, 0)
int32_t var_50_6 = 0
int32_t var_4c_6 = 0xff808080
var_78_4.q = _mm_unpacklo_ps(var_24.d, 0xbdcccccd)
var_78_4:8.d = 0
var_78_4:0xc.d = 0xff808080
var_88 = var_78_4
int128_t var_78_5 = xmm0_31.o
sub_571030(&result_1, &var_88)
int64_t xmm0_37 = _mm_unpacklo_ps(var_24.d, 0)
int32_t var_50_7 = 0x3dcccccd
var_78_5.q = _mm_unpacklo_ps(zx.o(0), 0)
var_78_5:8.d = 0
var_78_5:0xc.d = 0xff808080
int32_t var_4c_7 = 0xff808080
var_88 = var_78_5
int128_t var_78_6 = xmm0_37.o
sub_571030(&result_1, &var_88)
int64_t xmm0_42 = _mm_unpacklo_ps(var_2c.d, 0)
int32_t var_50_8 = 0
var_78_6.q = _mm_unpacklo_ps(var_24.d, 0)
var_78_6:8.d = 0x3dcccccd
var_78_6:0xc.d = 0xff808080
int32_t var_4c_8 = 0xff808080
var_88 = var_78_6
int128_t var_78_7 = xmm0_42.o
sub_571030(&result_1, &var_88)
int64_t xmm0_48 = _mm_unpacklo_ps(var_24.d, 0)
int32_t var_50_9 = 0xbdcccccd
var_78_7.q = _mm_unpacklo_ps(zx.o(0), 0)
var_78_7:8.d = 0
var_78_7:0xc.d = 0xff808080
int32_t var_4c_9 = 0xff808080
var_88 = var_78_7
int128_t var_78_8 = xmm0_48.o
sub_571030(&result_1, &var_88)
int64_t xmm0_53 = _mm_unpacklo_ps(zx.o(var_2c), 0)
int32_t var_50_10 = 0
var_78_8.q = _mm_unpacklo_ps(var_24.d, 0)
var_78_8:8.d = 0xbdcccccd
var_78_8:0xc.d = 0xff808080
int32_t var_4c_10 = 0xff808080
var_88 = var_78_8
int128_t var_78_9 = xmm0_53.o
sub_571030(&result_1, &var_88)
uint128_t xmm1_3 = zx.o(var_24)
int64_t xmm0_59 = _mm_unpacklo_ps(xmm1_3, 0)
int32_t var_50_11 = 0x3dcccccd
var_78_9.q = _mm_unpacklo_ps(xmm1_3, xmm1_3)
var_78_9:8.d = 0
var_78_9:0xc.d = 0xff808080
int32_t var_4c_11 = 0xff808080
var_88 = var_78_9
int128_t var_78_10 = xmm0_59.o
sub_571030(&result_1, &var_88)
uint128_t xmm2 = zx.o(var_24)
int64_t xmm0_65 = _mm_unpacklo_ps(xmm2, 0xbdcccccd)
int32_t var_50_12 = 0
var_78_10.q = _mm_unpacklo_ps(xmm2, 0)
var_78_10:8.d = 0x3dcccccd
var_78_10:0xc.d = 0xff808080
int32_t var_4c_12 = 0xff808080
var_88 = var_78_10
int128_t var_78_11 = xmm0_65.o
sub_571030(&result_1, &var_88)
uint128_t xmm1_4 = zx.o(var_24)
int64_t xmm0_71 = _mm_unpacklo_ps(xmm1_4, 0)
int32_t var_50_13 = 0xbdcccccd
var_78_11.q = _mm_unpacklo_ps(xmm1_4, 0xbdcccccd)
var_78_11:8.d = 0
var_78_11:0xc.d = 0xff808080
int32_t var_4c_13 = 0xff808080
var_88 = var_78_11
int128_t var_78_12 = xmm0_71.o
sub_571030(&result_1, &var_88)
uint128_t xmm1_5 = zx.o(var_24)
int64_t xmm0_77 = _mm_unpacklo_ps(xmm1_5, xmm1_5)
int32_t var_50_14 = 0
var_78_12:8.d = 0xbdcccccd
var_78_12.q = _mm_unpacklo_ps(xmm1_5, 0)
var_78_12:0xc.d = 0xff808080
int32_t var_4c_14 = 0xff808080
var_88 = var_78_12
int128_t var_78_13 = xmm0_77.o
sub_571030(&result_1, &var_88)
sub_570ee0(arg1, arg2)
void* esi = *arg1
int32_t edi_1 = arg1[1]
int32_t* ebx

if (esi == edi_1)
label_570c27:
    ebx.b = 1
else
    while (true)
        if (sub_58b7f0(esi, &result_1, &data_7e7128, 0, 0, arg3) == 0)
            ebx.b = 0
            break
        
        esi += 0x54
        
        if (esi == edi_1)
            goto label_570c27

void* result = result_1

if (result != 0)
    sub_403160(result, (var_30 - result) s>> 5, 0x20)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
