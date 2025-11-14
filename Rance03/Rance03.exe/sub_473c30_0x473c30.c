// 函数: sub_473c30
// 地址: 0x473c30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b98c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != *(arg1 + 0xc))
    sub_471420(*(*(arg1 + 0x10) + 4))
    void* eax_7 = *(arg1 + 0x10)
    *(eax_7 + 4) = eax_7
    int32_t* eax_8 = *(arg1 + 0x10)
    *eax_8 = eax_8
    void* eax_9 = *(arg1 + 0x10)
    *(eax_9 + 8) = eax_9
    *(arg1 + 0x14) = 0
    int32_t* eax_10 = *(arg1 + 8)
    int32_t* i = *eax_10
    
    if (i != eax_10)
        do
            bool cond:0_1 = i[9] u< 0x10
            var_5c = 0xffffffff
            char* eax_11
            
            if (cond:0_1)
                eax_11 = &i[4]
            else
                eax_11 = i[4]
            
            int32_t* var_74_2 = &var_5c
            sub_69b31c(eax_11, 0x6dcf3c)
            struct IString::common::CStringWrapper::VTable* const var_50 =
                &common::CStringWrapper::`vftable'{for `IString'}
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            sub_401ff0(&var_4c, &i[4], 0, 0xffffffff)
            int32_t var_4 = 0
            var_4.b = 1
            void var_34
            int32_t* eax_14
            int32_t ecx_4
            eax_14, ecx_4 = sub_471be0(sub_471870(&var_50, &var_5c, &var_34, &var_50))
            int32_t* var_74_5 = eax_14
            void* var_78_1 = &eax_14[4]
            void* var_58
            sub_471c90(arg1 + 0x10, &var_58, ecx_4)
            struct IString::common::CStringWrapper::VTable* const var_30_1 =
                &common::CStringWrapper::`vftable'{for `IString'}
            char var_2c
            int32_t var_18
            
            if (var_18 u>= 0x10)
                j__free(var_2c.d)
            
            int32_t var_4_1 = 0xffffffff
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            var_50 = &common::CStringWrapper::`vftable'{for `IString'}
            
            if (var_38_1 u>= 0x10)
                j__free(var_4c.d)
            
            if (*(i + 0xd) == 0)
                int32_t* i_1 = i[2]
                
                if (*(i_1 + 0xd) != 0)
                    int32_t* i_3 = i[1]
                    
                    if (*(i_3 + 0xd) == 0)
                        while (i == i_3[2])
                            i = i_3
                            i_3 = i_3[1]
                            
                            if (*(i_3 + 0xd) != 0)
                                break
                    
                    i = i_3
                else
                    i = i_1
                    int32_t* i_2 = *i
                    
                    while (*(i_2 + 0xd) == 0)
                        i = i_2
                        i_2 = *i
        while (i != *(arg1 + 8))

void** esi_1 = *(arg1 + 0x10)
void** ecx_6 = esi_1
void** eax_16 = esi_1[1]

while (*(eax_16 + 0xd) == 0)
    if (eax_16[4] s>= arg2)
        ecx_6 = eax_16
        eax_16 = *eax_16
    else
        eax_16 = eax_16[2]

if (ecx_6 != esi_1)
    var_5c = ecx_6

if (ecx_6 == esi_1 || arg2 s< ecx_6[4])
    var_5c = esi_1

void** eax_17 = var_5c
void* result

if (eax_17 == esi_1)
    result = nullptr
else
    result = &eax_17[5]

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
