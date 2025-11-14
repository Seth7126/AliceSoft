// 函数: sub_5ba2d0
// 地址: 0x5ba2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9478
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = nullptr
int32_t var_10 = 0
int32_t* eax_3
int32_t ecx
eax_3, ecx = sub_4a6eb0()
var_14 = eax_3
int32_t var_4 = 0
int32_t var_1c

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[4])
    if (*i != 0)
        uint32_t var_38_1 = zx.d(data_75dd31)
        int32_t* i_2 = i
        ecx = sub_4a6ee0(&var_14, &var_1c, ecx)

*(arg1 + 0x44) = *(arg1 + 0x40)
int32_t* eax_6 = var_14
int32_t* i_1 = *eax_6

if (i_1 != eax_6)
    do
        int32_t ecx_2 = *(arg1 + 0x44)
        int32_t ebp_1
        
        if (&i_1[4] u< ecx_2)
            ebp_1 = *(arg1 + 0x40)
        
        int32_t* ecx_14
        
        if (&i_1[4] u>= ecx_2 || ebp_1 u> &i_1[4])
            int32_t edx_5 = *(arg1 + 0x48)
            
            if (ecx_2 == edx_5 && (edx_5 - ecx_2) s>> 2 u< 1)
                int32_t ecx_10 = (ecx_2 - *(arg1 + 0x40)) s>> 2
                
                if (0x3fffffff - ecx_10 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_7 = (edx_5 - *(arg1 + 0x40)) s>> 2
                uint32_t ecx_12 = edx_7 u>> 1
                int32_t edx_8
                
                if (0x3fffffff - ecx_12 u>= edx_7)
                    edx_8 = edx_7 + ecx_12
                else
                    edx_8 = 0
                
                if (edx_8 u< ecx_10 + 1)
                    edx_8 = ecx_10 + 1
                
                sub_412f90(arg1 + 0x40, edx_8)
            
            ecx_14 = *(arg1 + 0x44)
            
            if (ecx_14 != 0)
                *ecx_14 = i_1[4]
        else
            int32_t edx_1 = *(arg1 + 0x48)
            
            if (ecx_2 == edx_1 && (edx_1 - ecx_2) s>> 2 u< 1)
                int32_t ecx_4 = (ecx_2 - ebp_1) s>> 2
                
                if (0x3fffffff - ecx_4 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_3 = (edx_1 - ebp_1) s>> 2
                var_1c = ecx_4 + 1
                uint32_t ecx_7 = edx_3 u>> 1
                int32_t edx_4
                
                if (0x3fffffff - ecx_7 u>= edx_3)
                    edx_4 = edx_3 + ecx_7
                else
                    edx_4 = 0
                
                if (edx_4 u< var_1c)
                    edx_4 = var_1c
                
                sub_412f90(arg1 + 0x40, edx_4)
            
            ecx_14 = *(arg1 + 0x44)
            
            if (ecx_14 != 0)
                *ecx_14 = *(*(arg1 + 0x40) + ((&i_1[4] - ebp_1) s>> 2 << 2))
        *(arg1 + 0x44) += 4
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_3 = i_1[2]
            
            if (*(i_3 + 0xd) != 0)
                int32_t* i_5 = i_1[1]
                
                if (*(i_5 + 0xd) == 0)
                    while (i_1 == i_5[2])
                        i_1 = i_5
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0xd) != 0)
                            break
                
                i_1 = i_5
            else
                i_1 = i_3
                int32_t* i_4 = *i_1
                
                while (*(i_4 + 0xd) == 0)
                    i_1 = i_4
                    i_4 = *i_1
    while (i_1 != var_14)

int32_t** eax_19 = var_14
sub_4200d0(&var_14, &var_1c, *eax_19, eax_19)
int32_t result = j__free(var_14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
