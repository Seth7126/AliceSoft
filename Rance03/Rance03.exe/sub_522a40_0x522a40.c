// 函数: sub_522a40
// 地址: 0x522a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c2ec8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28 = nullptr
int32_t var_24 = 0
var_28 = sub_4a6eb0()
int32_t var_c_1 = 0
int32_t* i = *arg1
int32_t var_2c

if (i != arg1[1])
    void* ebx_1 = arg2
    
    do
        void** ebx_2 = *(ebx_1 + 4)
        void** ecx_1 = ebx_2
        int32_t edx_1 = *i
        void** eax_4 = ebx_2[1]
        
        while (*(eax_4 + 0xd) == 0)
            if (eax_4[4] s>= edx_1)
                ecx_1 = eax_4
                eax_4 = *eax_4
            else
                eax_4 = eax_4[2]
        
        void*** eax_5
        
        if (ecx_1 == ebx_2 || edx_1 s< ecx_1[4])
            void** var_38 = ebx_2
            eax_5 = &var_38
        else
            void** var_3c = ecx_1
            eax_5 = &var_3c
        
        void** eax_6 = *eax_5
        
        if (eax_6 == *(arg2 + 4))
            ebx_1 = arg2
        else
            void* ecx_2 = eax_6[5]
            
            if (ecx_2 == 0)
                ebx_1 = arg2
            else
                int32_t ecx_3 = *(ecx_2 + 0x28)
                var_2c = ecx_3
                
                if (ecx_3 == 0xffffffff)
                    ebx_1 = arg2
                else
                    void** ebx_3 = *(arg2 + 4)
                    void** edx_3 = ebx_3
                    void** eax_7 = ebx_3[1]
                    
                    while (*(eax_7 + 0xd) == 0)
                        if (eax_7[4] s>= ecx_3)
                            edx_3 = eax_7
                            eax_7 = *eax_7
                        else
                            eax_7 = eax_7[2]
                    
                    void*** eax_8
                    
                    if (edx_3 == ebx_3 || ecx_3 s< edx_3[4])
                        void** var_30 = ebx_3
                        eax_8 = &var_30
                    else
                        void** var_34 = edx_3
                        eax_8 = &var_34
                    
                    ebx_1 = arg2
                    void** eax_9 = *eax_8
                    
                    if (eax_9 != *(ebx_1 + 4))
                        void* eax_10 = eax_9[5]
                        
                        if (eax_10 != 0 && *(eax_10 + 0xd8) != 0)
                            uint32_t var_50_1 = zx.d(data_75dd2a)
                            int32_t* var_54_1 = &var_2c
                            int32_t** var_20
                            sub_4ce350(&var_28, &var_20, ecx_3)
        
        i = &i[1]
    while (i != arg1[1])

int32_t* eax_12 = var_28
int32_t* i_1 = *eax_12

if (i_1 != eax_12)
    do
        int32_t* edx_4 = *arg1
        int32_t* eax_13 = edx_4
        int32_t ecx_5 = arg1[1]
        
        if (eax_13 == ecx_5)
        label_522bbf:
            int32_t* ecx_18
            
            if (&i_1[4] u>= ecx_5 || edx_4 u> &i_1[4])
                int32_t edx_9 = arg1[2]
                
                if (ecx_5 == edx_9 && (edx_9 - ecx_5) s>> 2 u< 1)
                    int32_t ecx_13 = (ecx_5 - *arg1) s>> 2
                    
                    if (0x3fffffff - ecx_13 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    int32_t edx_11 = (edx_9 - *arg1) s>> 2
                    var_2c = ecx_13 + 1
                    uint32_t ecx_16 = edx_11 u>> 1
                    int32_t edx_12
                    
                    if (0x3fffffff - ecx_16 u>= edx_11)
                        edx_12 = edx_11 + ecx_16
                    else
                        edx_12 = 0
                    
                    if (edx_12 u< var_2c)
                        edx_12 = var_2c
                    
                    sub_412f90(arg1, edx_12)
                
                ecx_18 = arg1[1]
                
                if (ecx_18 != 0)
                    *ecx_18 = i_1[4]
            else
                int32_t edx_5 = arg1[2]
                
                if (ecx_5 == edx_5 && (edx_5 - ecx_5) s>> 2 u< 1)
                    int32_t ecx_7 = (ecx_5 - *arg1) s>> 2
                    
                    if (0x3fffffff - ecx_7 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    int32_t edx_7 = (edx_5 - *arg1) s>> 2
                    var_2c = ecx_7 + 1
                    uint32_t ecx_10 = edx_7 u>> 1
                    int32_t edx_8
                    
                    if (0x3fffffff - ecx_10 u>= edx_7)
                        edx_8 = edx_7 + ecx_10
                    else
                        edx_8 = 0
                    
                    if (edx_8 u< var_2c)
                        edx_8 = var_2c
                    
                    sub_412f90(arg1, edx_8)
                
                ecx_18 = arg1[1]
                
                if (ecx_18 != 0)
                    *ecx_18 = *(*arg1 + ((&i_1[4] - edx_4) s>> 2 << 2))
            arg1[1] += 4
        else
            while (*eax_13 != i_1[4])
                eax_13 = &eax_13[1]
                
                if (eax_13 == ecx_5)
                    break
            
            if (eax_13 == ecx_5)
                goto label_522bbf
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_2 = i_1[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i_1[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i_1 == i_4[2])
                        i_1 = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i_1 = i_4
            else
                i_1 = i_2
                int32_t* i_3 = *i_1
                
                while (*(i_3 + 0xd) == 0)
                    i_1 = i_3
                    i_3 = *i_1
    while (i_1 != var_28)

int32_t** eax_26 = var_28
sub_4200d0(&var_28, &var_2c, *eax_26, eax_26)
int32_t result = j__free(var_28)
fsbase->NtTib.ExceptionList = ExceptionList
return result
