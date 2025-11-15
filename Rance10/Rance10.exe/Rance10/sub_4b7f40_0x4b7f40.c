// 函数: sub_4b7f40
// 地址: 0x4b7f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7324b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0xb4)
int32_t ebx = *(arg1 + 0xb8)
*(arg1 + 0x158) = 0
int32_t ecx = *(arg1 + 0xc0)
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(ebx)
int128_t var_64 = *(arg1 + 0xc8)
struct textsurface::CTextSurfaceProperty::VTable* const var_70 =
    &textsurface::CTextSurfaceProperty::`vftable'
int32_t var_54 = *(arg1 + 0xd8)
int32_t edx_2 = (eax_5 - edx) s>> 1
int32_t var_50 = *(arg1 + 0xdc)
int32_t eax_8 = ebx - edx_2
int32_t var_6c = ecx
int128_t var_4c = *(arg1 + 0xe0)
int32_t var_8_1 = 0
void* esi = *(arg1 + 0xa0)
int32_t var_68 = edx_2 - 2
sub_4eec50(esi, 4, 1)
int32_t* ecx_2 = *(esi + 0x74)

if (ecx_2[0x44] != eax_3 - ebx + 2 || ecx_2[0x45] != ebx)
    ecx_2[0x44] = eax_3 - ebx + 2
    ecx_2[0x45] = ebx
    *(ecx_2 + 0x1b9) = 1

sub_51b8f0(&ecx_2[0x43], arg1 + 0xbc)
char eax_14 = *(arg1 + 0xf0)

if (ecx_2[0x53].b != eax_14)
    ecx_2[0x53].b = eax_14
    *(ecx_2 + 0x1b9) = 1

int32_t edx_3 = *(arg1 + 0x10c)
int32_t eax_15 = *(arg1 + 0x114)
int32_t ecx_4 = *(arg1 + 0x110)

if (ecx_2[0x5b] != edx_3 || ecx_2[0x5c] != ecx_4 || ecx_2[0x5d] != eax_15)
    ecx_2[0x5b] = edx_3
    ecx_2[0x5c] = ecx_4
    ecx_2[0x5d] = eax_15
    *(ecx_2 + 0x1b9) = 1

int32_t edx_4 = *(arg1 + 0x118)
int32_t eax_16 = *(arg1 + 0x120)
int32_t ecx_5 = *(arg1 + 0x11c)

if (ecx_2[0x5e] != edx_4 || ecx_2[0x5f] != ecx_5 || ecx_2[0x60] != eax_16)
    ecx_2[0x5e] = edx_4
    ecx_2[0x5f] = ecx_5
    ecx_2[0x60] = eax_16
    *(ecx_2 + 0x1b9) = 1

int32_t edx_5 = *(arg1 + 0x124)
int32_t eax_17 = *(arg1 + 0x12c)
int32_t ecx_6 = *(arg1 + 0x128)

if (ecx_2[0x61] != edx_5 || ecx_2[0x62] != ecx_6 || ecx_2[0x63] != eax_17)
    ecx_2[0x61] = edx_5
    ecx_2[0x62] = ecx_6
    ecx_2[0x63] = eax_17
    *(ecx_2 + 0x1b9) = 1

int32_t edx_6 = *(arg1 + 0x130)
int32_t eax_18 = *(arg1 + 0x138)
int32_t ecx_7 = *(arg1 + 0x134)

if (ecx_2[0x64] != edx_6 || ecx_2[0x65] != ecx_7 || ecx_2[0x66] != eax_18)
    ecx_2[0x64] = edx_6
    ecx_2[0x65] = ecx_7
    ecx_2[0x66] = eax_18
    *(ecx_2 + 0x1b9) = 1

var_8_1.b = 1
void* var_2c
sub_51ba00(&ecx_2[0x43], sub_4b5160(arg1 + 0xb0, &var_2c))
var_8_1.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

int32_t eax_22 = *(arg1 + 0x154)

if (ecx_2[0x6d] != eax_22)
    ecx_2[0x6d] = eax_22
    *(ecx_2 + 0x1b9) = 1

if ((*(*ecx_2 + 0x18))(eax_2) == 0)
    sub_4b7ab0(arg1)

void* esi_2 = *(arg1 + 0xa4)
sub_4eec50(esi_2, nullptr, 1)
void* esi_4 = *(esi_2 + 0x74) + 0xa4

if (*(esi_4 + 4) != ebx || *(esi_4 + 8) != edx_2)
    *(esi_4 + 4) = ebx
    *(esi_4 + 8) = edx_2
    *(esi_4 + 0x174) = 1

sub_4df7a0(esi_4, &var_70)
var_8_1.b = 2
sub_4df830(esi_4, sub_4b51b0(arg1 + 0xb0, &var_2c))
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

void* esi_5 = *(arg1 + 0xa8)
sub_4eec50(esi_5, nullptr, 1)
void* esi_7 = *(esi_5 + 0x74) + 0xa4

if (*(esi_7 + 4) != ebx || *(esi_7 + 8) != eax_8)
    *(esi_7 + 4) = ebx
    *(esi_7 + 8) = eax_8
    *(esi_7 + 0x174) = 1

sub_4df7a0(esi_7, &var_70)
var_8_1.b = 3
sub_4df830(esi_7, sub_4b5200(arg1 + 0xb0, &var_2c))

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

void* eax_34 = *(arg1 + 0xa4)
int32_t var_8c_5

if (*(arg1 + 0xf0) == 0)
    *(eax_34 + 0x8e) = 0
    int32_t var_84_11 = 0xff
    int32_t var_88_6 = 0xff
    *(*(arg1 + 0xa8) + 0x8e) = 0
    sub_504150(*(arg1 + 0xa4) + 0x84, 0xff)
    int32_t var_84_12 = 0xff
    int32_t var_88_7 = 0xff
    var_8c_5 = 0xff
else
    *(eax_34 + 0x8e) = 1
    *(*(arg1 + 0xa8) + 0x8e) = 1
    int32_t var_84_9 = *(arg1 + 0x120)
    int32_t var_88_4 = *(arg1 + 0x11c)
    sub_504150(*(arg1 + 0xa4) + 0x84, *(arg1 + 0x118))
    int32_t var_84_10 = *(arg1 + 0x120)
    int32_t var_88_5 = *(arg1 + 0x11c)
    var_8c_5 = *(arg1 + 0x118)

int32_t result = sub_504150(*(arg1 + 0xa8) + 0x84, var_8c_5)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
