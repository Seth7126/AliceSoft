// 函数: sub_532930
// 地址: 0x532930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c3b98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x38) = *(arg1 + 0x34)
*(arg1 + 0x44) = *(arg1 + 0x40)
float* eax_5 = arg2
void* eax_6 = sub_532820(arg1, *eax_5, eax_5[2])
float* eax_7 = arg3
void* var_50 = eax_6
void* eax_8 = sub_532820(arg1, *eax_7, eax_7[2])

if (eax_6 == 0 || eax_8 == 0)
    eax_8.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

struct sealengine::CViewPyramid::VTable* var_28
sub_59d420(&var_28, arg4, arg5)
int32_t var_c_1 = 0

for (void* i = *(arg1 + 4); i != *(arg1 + 8); i += 0x84)
    sub_5300d0(i, &var_28)

int32_t var_34 = 0
int32_t* ebx_1 = sub_441d20(nullptr, nullptr)
int32_t* var_38 = ebx_1
var_c_1.b = 1
int32_t var_2c = 0
int32_t* edi = sub_441d20(nullptr, nullptr)
int32_t* var_30 = edi
var_c_1.b = 2
void* eax_11 = var_50
*(eax_11 + 0x78) = 0
float xmm2_3 = *(eax_8 + 0x68) f- *(eax_11 + 0x68)
float xmm1_3 = *(eax_8 + 0x6c) f- *(eax_11 + 0x6c)
float xmm0_1 = *(eax_8 + 0x70) f- *(eax_11 + 0x70)
*(eax_11 + 0x74) = 0
*(eax_11 + 0x7c) = xmm2_3 * xmm2_3 + xmm1_3 * xmm1_3 + xmm0_1 * xmm0_1
int32_t* eax_12
int32_t edx
eax_12, edx = sub_441d60(ebx_1, ebx_1[1], &var_50)
ebx_1[1] = eax_12
int32_t var_34_1 = 1
*eax_12[1] = eax_12
char var_55_2

while (true)
    void** i_1 = *ebx_1
    void* i_2 = nullptr
    float xmm1_5 = 3.40282347e+38f
    
    for (; i_1 != ebx_1; i_1 = *i_1)
        void* i_6 = i_1[2]
        
        if (*(i_6 + 0x80) != 0)
            float xmm0_4 = *(i_6 + 0x7c) f+ *(i_6 + 0x78)
            
            if (not(xmm1_5 <= xmm0_4))
                xmm1_5 = xmm0_4
                i_2 = i_6
    
    void* i_5 = i_2
    
    if (i_2 == 0)
        var_55_2 = 0
        break
    
    if (i_2 == eax_8)
        sub_533630(arg1 + 0x34, arg3)
        
        for (; i_2 != 0; i_2 = *(i_2 + 0x74))
            sub_533630(arg1 + 0x34, i_2 + 0x68)
        
        sub_533630(arg1 + 0x34, arg2)
        sub_533a90(*(arg1 + 0x34), *(arg1 + 0x38))
        ebx_1 = var_38
        sub_532dc0(arg1)
        var_55_2 = 1
        break
    
    void* ecx_7 = i_2 + 0x28
    var_50 = nullptr
    void* var_4c_1 = ecx_7
    int32_t esi_2
    
    while (true)
        void* i_3 = *ecx_7
        void* i_4 = i_3
        
        if (i_3 == 0)
            goto label_532c35
        
        float xmm2_8 = *(i_3 + 0x68) f- *(i_2 + 0x68)
        float xmm1_7 = *(i_3 + 0x6c) f- *(i_2 + 0x6c)
        float xmm0_6 = *(i_3 + 0x70) f- *(i_2 + 0x70)
        void** eax_13 = *ebx_1
        float xmm2_12 = xmm2_8 * xmm2_8 + xmm1_7 * xmm1_7 + xmm0_6 * xmm0_6 f+ *(i_2 + 0x78)
        bool cond:1_1 = eax_13 != ebx_1
        
        if (eax_13 != ebx_1)
            while (eax_13[2] != i_3)
                eax_13 = *eax_13
                
                if (eax_13 == ebx_1)
                    break
            
            cond:1_1 = eax_13 != ebx_1
        
        void** eax_14 = *edi
        edx.b = cond:1_1
        bool cond:2_1 = eax_14 != edi
        
        if (eax_14 != edi)
            while (eax_14[2] != i_3)
                eax_14 = *eax_14
                
                if (eax_14 == edi)
                    break
            
            cond:2_1 = eax_14 != edi
        
        eax_14.b = cond:2_1
        
        if ((edx.b != 0 || eax_14.b != 0) && xmm2_12 f>= *(i_3 + 0x78))
            goto label_532c35
        
        *(i_3 + 0x78) = xmm2_12
        *(i_3 + 0x74) = i_2
        ebx_1 = var_38
        float xmm2_14 = *(eax_8 + 0x68) f- *(i_3 + 0x68)
        float xmm1_10 = *(eax_8 + 0x6c) f- *(i_3 + 0x6c)
        float xmm0_9 = *(eax_8 + 0x70) f- *(i_3 + 0x70)
        *(i_3 + 0x7c) = xmm2_14 * xmm2_14 + xmm1_10 * xmm1_10 + xmm0_9 * xmm0_9
        
        if (eax_14.b != 0)
            void** eax_15 = *edi
            
            if (eax_15 != edi)
                while (eax_15[2] != i_3)
                    eax_15 = *eax_15
                    
                    if (eax_15 == edi)
                        break
            
            var_2c -= 1
            *eax_15[1] = *eax_15
            *(*eax_15 + 4) = eax_15[1]
            j__free(eax_15)
            edx.b = edx.b
        
        if (edx.b != 0)
            goto label_532c35
        
        int32_t* eax_16 = sub_441d60(ebx_1, ebx_1[1], &i_4)
        
        if (0x15555554 - var_34_1 u>= 1)
            ebx_1[1] = eax_16
            var_34_1 += 1
            *eax_16[1] = eax_16
        label_532c35:
            var_50 += 1
            ecx_7 = var_4c_1 + 4
            var_4c_1 = ecx_7
            
            if (var_50 s< 3)
                continue
            else
                void** eax_17 = *ebx_1
                
                if (eax_17 != ebx_1)
                    while (eax_17[2] != i_2)
                        eax_17 = *eax_17
                        
                        if (eax_17 == ebx_1)
                            break
                
                esi_2 = var_34_1 - 1
                *eax_17[1] = *eax_17
                var_34_1 = esi_2
                *(*eax_17 + 4) = eax_17[1]
                j__free(eax_17)
                int32_t* eax_18 = sub_441d60(edi, edi[1], &i_5)
                
                if (0x15555554 - var_2c u>= 1)
                    edi[1] = eax_18
                    var_2c += 1
                    *eax_18[1] = eax_18
                    break
        
        sub_69a551("list<T> too long")
        noreturn
    
    if (esi_2 == 0)
        sub_532dc0(arg1)
        var_55_2 = 1
        break

int32_t* eax_20 = *edi
*edi = edi
edi[1] = edi

if (eax_20 != edi)
    int32_t* esi_5
    
    do
        esi_5 = *eax_20
        j__free(eax_20)
        eax_20 = esi_5
    while (esi_5 != edi)

j__free(edi)
int32_t* eax_21 = *ebx_1
*ebx_1 = ebx_1
ebx_1[1] = ebx_1

if (eax_21 != ebx_1)
    int32_t* esi_6
    
    do
        esi_6 = *eax_21
        j__free(eax_21)
        eax_21 = esi_6
    while (esi_6 != ebx_1)

j__free(ebx_1)
var_28 = &sealengine::CViewPyramid::`vftable'
int32_t var_24

if (var_24 != 0)
    j__free(var_24)

int32_t eax_22
eax_22.b = var_55_2
fsbase->NtTib.ExceptionList = ExceptionList
return eax_22
