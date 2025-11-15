// 函数: sub_4c1970
// 地址: 0x4c1970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7330ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4efcc0(*(arg1 + 0xa4))
uint128_t var_44
sub_62b3b0(&var_44)
int32_t var_8_1 = 0
float var_1c = sub_603140()
int32_t var_8_2 = 1

if (sub_602c60(&var_44) != 0)
    void* ecx_4 = data_7fcbb4
    int32_t var_3c
    
    if (ecx_4 != 0)
        sub_621db0(ecx_4, var_3c)

int32_t var_8_3 = 0xffffffff
int32_t eax_6 = *(arg1 + 0x180)
void* esi = *(eax_3 + 0x44)
int32_t eax_7 = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x1b8))) * var_1c)
sub_555e00(esi, 0x13, 1)
void* eax_8 = *(esi + 0x80)

if (*(eax_8 + 0xcc) != eax_7)
    *(eax_8 + 0xcc) = eax_7
    *(eax_8 + 0xd4) = 1

*(*(arg1 + 0xa4) + 0xa4) = eax_6
void* esi_2

if (eax_6 - 1 u<= 8)
    switch (eax_6 + &jump_table_4c1cb0[2]:3)
        case &lookup_table_4c1cbc, &lookup_table_4c1cbc[3], &lookup_table_4c1cbc[6]
            void* esi_1 = *(eax_3 + 0x44)
            sub_555e00(esi_1, 0x13, 1)
            esi_2 = *(esi_1 + 0x80)
            
            if (*(esi_2 + 0xd0) != 7)
                *(esi_2 + 0xd0) = 7
                sub_55d550(esi_2)
                *(esi_2 + 0xd4) = 1
        case &lookup_table_4c1cbc[1], &lookup_table_4c1cbc[4], &lookup_table_4c1cbc[7]
            void* esi_3 = *(eax_3 + 0x44)
            sub_555e00(esi_3, 0x13, 1)
            esi_2 = *(esi_3 + 0x80)
            
            if (*(esi_2 + 0xd0) != 8)
                *(esi_2 + 0xd0) = 8
                sub_55d550(esi_2)
                *(esi_2 + 0xd4) = 1
        case &lookup_table_4c1cbc[2], &lookup_table_4c1cbc[5], &lookup_table_4c1cbc[8]
            void* esi_4 = *(eax_3 + 0x44)
            sub_555e00(esi_4, 0x13, 1)
            esi_2 = *(esi_4 + 0x80)
            
            if (*(esi_2 + 0xd0) != 9)
                *(esi_2 + 0xd0) = 9
                sub_55d550(esi_2)
                *(esi_2 + 0xd4) = 1
void* esi_5 = *(eax_3 + 0x44)
int32_t eax_12 = *(arg1 + 0x1bc)
sub_555e00(esi_5, 0x13, 1)
void* esi_6 = *(esi_5 + 0x80)

if (*(esi_6 + 0x40) != eax_12)
    *(esi_6 + 0x40) = eax_12
    sub_55d550(esi_6)
    *(esi_6 + 0xd4) = 1

void* esi_7 = *(eax_3 + 0x44)
int32_t eax_14 = *(arg1 + 0x1c0)
sub_555e00(esi_7, 0x13, 1)
void* esi_8 = *(esi_7 + 0x80)

if (*(esi_8 + 0x44) != eax_14)
    *(esi_8 + 0x44) = eax_14
    sub_55d550(esi_8)
    *(esi_8 + 0xd4) = 1

int32_t eax_15
eax_15.b = *(arg1 + 0x1c4)

if (eax_15.b == 0)
    void* esi_10 = *(eax_3 + 0x44)
    sub_555e00(esi_10, 0x13, 1)
    sub_55f4d0(*(esi_10 + 0x80), arg1 + 0x184)
else
    int32_t var_74_1 = *(arg1 + 0x188)
    int32_t eax_17 = *(arg1 + 0x18c)
    int128_t var_6c_1 = *(arg1 + 0x190)
    struct textsurface::CTextSurfaceProperty::VTable* const var_78 =
        &textsurface::CTextSurfaceProperty::`vftable'
    int32_t var_5c_1 = *(arg1 + 0x1a0)
    int32_t var_58_1 = *(arg1 + 0x1a4)
    int32_t var_70_1 = eax_17
    int128_t var_54_1 = *(arg1 + 0x1a8)
    int32_t var_8_4 = 2
    uint128_t xmm1_1 = *(arg1 + 0x190)
    var_1c = xmm1_1
    var_44 = xmm1_1
    int32_t xmm0_9 = _mm_bsrli_si128(xmm1_1, 4)
    int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 8)
    int32_t var_18 = xmm0_9
    int32_t var_14 = xmm1_2
    int32_t var_34
    sub_62b3e0(&var_18, &var_1c, &var_34, &var_18, &var_14)
    int32_t* ecx_17 = &var_34
    var_8_4.b = 3
    
    if (sub_602c60(ecx_17) != 0)
        ecx_17 = data_7fcbb4
        int32_t var_2c
        
        if (ecx_17 != 0)
            ecx_17 = sub_621db0(ecx_17, var_2c)
    
    int32_t* var_90_4 = ecx_17
    var_8_4.b = 2
    int32_t var_94_2 = var_14
    var_34 = 0xffffffff
    sub_403090(&var_44, var_1c, var_18, var_94_2)
    void* esi_9 = *(eax_3 + 0x44)
    uint128_t var_6c_2 = var_44
    sub_555e00(esi_9, 0x13, 1)
    sub_55f4d0(*(esi_9 + 0x80), &var_78)
    int32_t var_8_5 = 0xffffffff

void* esi_11 = *(eax_3 + 0x44)
sub_555e00(esi_11, 0x13, 1)
int32_t result = sub_55d4d0(*(esi_11 + 0x80), arg1 + 0x14c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
