// 函数: sub_5d9360
// 地址: 0x5d9360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7414c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_44 = &fileimage::CFileImageMaker::`vftable'
uint8_t* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "BON", 3)
var_8_1.b = 1
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_60 = 0.d
sub_6ca200(&var_40, nullptr, edx, var_1c + esi)
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

sub_6ca100(&var_44, 0)
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_2 = edx_1 s>> 6
sub_6ca100(&var_44, (edx_2 u>> 0x1f) + edx_2)
int32_t eax_11
int32_t edx_3
edx_3:eax_11 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t i_2 = 0
int32_t edx_4 = edx_3 s>> 6
char var_30

if ((edx_4 u>> 0x1f) + edx_4 s> 0)
    int32_t edi_1 = 0
    int32_t edx_6
    int32_t i
    
    do
        void* esi_2 = *arg1 + edi_1
        int32_t eax_15
        eax_15.b = *(esi_2 + 0x7c) != 0
        sub_6ca100(&var_44, eax_15)
        var_30.d = *(esi_2 + 0x80)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0x84)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0x88)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0x8c)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0x90)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0x94)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0xa4)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0xb4)
        sub_6ca100(&var_44, var_30.d)
        var_30.d = *(esi_2 + 0xc8)
        sub_6ca100(&var_44, var_30.d)
        edi_1 += 0xd8
        int32_t eax_16
        int32_t edx_5
        edx_5:eax_16 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
        i = i_2 + 1
        edx_6 = edx_5 s>> 6
        i_2 = i
    while (i s< (edx_6 u>> 0x1f) + edx_6)

int32_t eax_20
int32_t edx_7
edx_7:eax_20 = muls.dp.d(0x2aaaaaab, arg1[8] - arg1[7])
int32_t edx_8 = edx_7 s>> 3
sub_6ca100(&var_44, (edx_8 u>> 0x1f) + edx_8)
int32_t eax_24
int32_t edx_9
edx_9:eax_24 = muls.dp.d(0x2aaaaaab, arg1[8] - arg1[7])
var_30.d = 0
int32_t edx_10 = edx_9 s>> 3

if ((edx_10 u>> 0x1f) + edx_10 s> 0)
    int32_t eax_28 = 0
    int32_t var_48 = 0
    int32_t edx_12
    int32_t i_1
    
    do
        int32_t* edi_3 = arg1[7] + eax_28
        sub_6ca100(&var_44, *edi_3)
        sub_6ca100(&var_44, edi_3[1])
        sub_6ca100(&var_44, edi_3[2])
        sub_6ca100(&var_44, edi_3[3])
        sub_6ca100(&var_44, edi_3[4])
        sub_6ca100(&var_44, edi_3[5])
        sub_6ca100(&var_44, edi_3[6])
        sub_6ca100(&var_44, edi_3[7])
        sub_6ca100(&var_44, edi_3[8])
        sub_6ca100(&var_44, (edi_3[0xa] - edi_3[9]) s>> 2)
        int32_t j = 0
        
        if (((edi_3[0xa] - edi_3[9]) & 0xfffffffc) s> 0)
            do
                sub_6ca100(&var_44, *(edi_3[9] + (j << 2)))
                j += 1
            while (j s< (edi_3[0xa] - edi_3[9]) s>> 2)
        
        var_48 += 0x30
        i_1 = var_30.d + 1
        int32_t eax_38
        int32_t edx_11
        edx_11:eax_38 = muls.dp.d(0x2aaaaaab, arg1[8] - arg1[7])
        var_30.d = i_1
        edx_12 = edx_11 s>> 3
        eax_28 = var_48
    while (i_1 s< (edx_12 u>> 0x1f) + edx_12)

uint8_t* esi_5 = var_40
uint8_t* edx_13 = nullptr

if (esi_5 != var_3c)
    edx_13 = esi_5

BOOL eax_43 = var_3c - esi_5
int32_t* ebx
ebx.b = sub_67efe0(eax_43, edx_13, &arg1[0xa], eax_43) != 0

if (esi_5 != 0)
    sub_403160(esi_5, var_38 - esi_5, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
