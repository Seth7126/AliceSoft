// 函数: sub_4df060
// 地址: 0x4df060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c00e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
var_88 = edi
void** ebp = edi + 0xa8
void** ebx = edi + 0xc0
int32_t* var_78 = ebp
int32_t* var_40
sub_40d1c0(&ExceptionList, ebp, &var_40, ebx)
int32_t var_4 = 0
int32_t* i_5 = sub_4c75f0(&var_40)
int32_t arg_4
int32_t edx_1 = arg_4
int32_t arg_8
int32_t ecx_1 = arg_8
int32_t var_2c
int32_t var_28
int32_t var_14

if (edx_1 != ecx_1 && ecx_1 s<= i_5)
    int32_t* eax_6 = &arg_8
    
    if (ecx_1 s>= edx_1)
        eax_6 = &arg_4
    
    int32_t* i_2 = *eax_6
    int32_t* eax_7 = &arg_8
    
    if (edx_1 s>= ecx_1)
        eax_7 = &arg_4
    
    int32_t edi_1 = *eax_7
    sub_402110(var_78, 0x6da5a3, nullptr)
    sub_402110(ebx, 0x6da5a2, nullptr)
    void* esi_1 = nullptr
    int32_t* i_4 = nullptr
    
    if (i_2 s> 0)
        int32_t* edx_2 = var_40
        i_4 = i_2
        int32_t* i
        
        do
            int32_t* eax_8 = &var_40
            
            if (var_2c u>= 0x10)
                eax_8 = edx_2
            
            int32_t* eax_9
            
            if (*(eax_8 + esi_1) u>= 0x81)
                eax_9 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_9 = edx_2
            
            if (*(eax_8 + esi_1) u>= 0x81 && *(eax_9 + esi_1) u<= 0x9f)
                esi_1 += 1
            else
                int32_t* eax_10 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_10 = edx_2
                
                if (*(eax_10 + esi_1) u>= 0xe0)
                    int32_t* eax_11 = &var_40
                    
                    if (var_2c u>= 0x10)
                        eax_11 = edx_2
                    
                    if (*(eax_11 + esi_1) u<= 0xef)
                        esi_1 += 1
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    void* var_80 = esi_1
    char* eax_12 = sub_403070(&var_40, &var_28, 0, esi_1)
    ebp = var_78
    
    if (ebp != eax_12)
        if (ebp[5] u>= 0x10)
            j__free(*ebp)
        
        ebp[5] = 0xf
        ebp[4] = 0
        *ebp = nullptr
        sub_4030b0(ebp, eax_12)
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    int32_t* i_6 = i_4
    
    if (i_6 s< edi_1)
        void* i_3 = edi_1 - i_6
        int32_t** edx_3 = var_40
        void* i_1
        
        do
            char* eax_13 = &var_40
            
            if (var_2c u>= 0x10)
                eax_13 = edx_3
            
            int32_t** eax_14
            
            if (*(eax_13 + esi_1) u>= 0x81)
                eax_14 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_14 = edx_3
            
            if (*(eax_13 + esi_1) u>= 0x81 && *(eax_14 + esi_1) u<= 0x9f)
                esi_1 += 1
            else
                char* eax_15 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_15 = edx_3
                
                if (*(eax_15 + esi_1) u>= 0xe0)
                    int32_t** eax_16 = &var_40
                    
                    if (var_2c u>= 0x10)
                        eax_16 = edx_3
                    
                    if (*(eax_16 + esi_1) u<= 0xef)
                        esi_1 += 1
            
            esi_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t var_30
    char* eax_19 = sub_403070(&var_40, &var_28, esi_1, var_30 - esi_1)
    
    if (ebx != eax_19)
        if (ebx[5] u>= 0x10)
            j__free(*ebx)
        
        ebx[5] = 0xf
        ebx[4] = 0
        *ebx = nullptr
        
        if (*(eax_19 + 0x14) u>= 0x10)
            *ebx = *eax_19
            *eax_19 = 0
        else
            void* eax_20 = *(eax_19 + 0x10)
            
            if (eax_20 != 0xffffffff)
                _memcpy(ebx, eax_19, eax_20 + 1, eax_4)
        
        ebx[4] = *(eax_19 + 0x10)
        ebx[5] = *(eax_19 + 0x14)
        *(eax_19 + 0x14) = 0xf
        *(eax_19 + 0x10) = 0
        *eax_19 = 0
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    void* eax_25 = var_80
    char* eax_26 = sub_403070(&var_40, &var_28, eax_25, esi_1 - eax_25)
    struct partsengine::CCharSpriteProperty::VTable* const var_74 =
        &partsengine::CCharSpriteProperty::`vftable'
    var_4.b = 2
    edi = var_88
    int128_t var_68_1 = *(edi + 0x110)
    int32_t var_70_1 = *(edi + 0x108)
    float xmm0_2 = *(edi + 0x120)
    float xmm0_3 = *(edi + 0x124)
    int32_t var_6c_1 = *(edi + 0x10c)
    int128_t var_50_1 = *(edi + 0x128)
    int32_t* i_7 = (*(*edi + 0x2c))(1) - *(edi + 0xf8)
    i_4 = i_7
    void* ecx_14 = i_7 & 0x80000001
    bool cond:10_1 = ecx_14 == 0
    
    if (ecx_14 s< 0)
        cond:10_1 = ((ecx_14 - 1) | 0xfffffffe) == 0xffffffff
    
    if (not(cond:10_1))
        i_4 = i_7 + 1
    
    void* var_a4_3
    var_a4_3.q = fconvert.d(fconvert.t(xmm0_2))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0_1
    st0_1, x87control_1 = sub_6b1380(mxcsr, x87control, var_a4_3)
    var_88 = fconvert.s(st0_1)
    int32_t esi_4 = int.d(fconvert.t(var_88))
    var_a4_3.q = fconvert.d(fconvert.t(xmm0_3))
    var_80 = esi_4
    var_88 = fconvert.s(sub_6b1380(mxcsr, x87control_1, var_a4_3))
    int32_t eax_30 = int.d(fconvert.t(var_88))
    void** ecx_18 = &var_88
    var_88 = eax_30
    
    if (esi_4 s>= eax_30)
        ecx_18 = &var_80
    
    void* ecx_20 = i_4 - *ecx_18 * 2
    i_4 = nullptr
    void* var_6c_2 = ecx_20
    var_88 = nullptr
    sub_4dec30(&var_74, eax_26, &i_4, &var_88)
    var_4.b = 0
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    i_5 = i_4
    *(edi + 0xf0) += i_5

var_4.b = 3
char* result = sub_4daf10(edi + 0xf4, sub_40d1c0(i_5, ebp, &var_28, ebx))

if (var_14 u>= 0x10)
    result = j__free(var_28)

*(edi + 0x98) = 0xffffffff
*(edi + 0x9c) = 0xffffffff

if (var_2c u>= 0x10)
    result = j__free(var_40)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return result
