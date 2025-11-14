// 函数: sub_43e210
// 地址: 0x43e210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
void* var_8 = ebp
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(ebp + 8) - *(ebp + 4))
int32_t edx_3 = edx_2 s>> 2
sub_468ec0(arg2, (edx_3 u>> 0x1f) + edx_3)
int32_t* i = *(ebp + 4)

if (i != *(ebp + 8))
    char var_e = 0
    
    do
        int32_t eax_4 = i[5]
        int32_t* i_4
        
        if (eax_4 u< 0x10)
            i_4 = i
        else
            i_4 = *i
        
        int32_t* i_2
        
        if (eax_4 u< 0x10)
            i_2 = i
        else
            i_2 = *i
        
        void* var_24_1 = arg2
        sub_468ff0(arg2 + 4, *(arg2 + 8), i_2, i_4 + i[4])
        int32_t ecx_2 = *(arg2 + 8)
        int32_t eax_7
        
        if (&var_e u< ecx_2)
            eax_7 = *(arg2 + 4)
        
        if (&var_e u>= ecx_2 || eax_7 u> &var_e)
            if (ecx_2 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            char* eax_9 = *(arg2 + 8)
            
            if (eax_9 != 0)
                *eax_9 = 0
        else
            if (ecx_2 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            char* ecx_4 = *(arg2 + 8)
            
            if (ecx_4 != 0)
                int32_t eax_8
                eax_8.b = *(&var_e - eax_7 + *(arg2 + 4))
                *ecx_4 = eax_8.b
        
        i = &i[6]
        *(arg2 + 8) += 1
    while (i != *(var_8 + 8))
    
    ebp = var_8

int32_t eax_11
int32_t edx_4
edx_4:eax_11 = muls.dp.d(0x2aaaaaab, *(ebp + 0x14) - *(ebp + 0x10))
int32_t ecx_8 = *(arg2 + 8)
int32_t edx_5 = edx_4 s>> 2
int32_t ebx_5 = (edx_5 u>> 0x1f) + edx_5
char var_d = ebx_5.b
int32_t eax_12

if (&var_d u< ecx_8)
    eax_12 = *(arg2 + 4)

if (&var_d u>= ecx_8 || eax_12 u> &var_d)
    if (ecx_8 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    char* eax_14 = *(arg2 + 8)
    
    if (eax_14 != 0)
        *eax_14 = ebx_5.b
else
    if (ecx_8 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    char* ecx_10 = *(arg2 + 8)
    
    if (ecx_10 != 0)
        int32_t eax_13
        eax_13.b = *(&var_d - eax_12 + *(arg2 + 4))
        *ecx_10 = eax_13.b

*(arg2 + 8) += 1
int32_t ecx_12 = *(arg2 + 8)
uint32_t eax_16 = ebx_5 u>> 8
char var_c = eax_16.b
int32_t edx_6

if (&var_c u< ecx_12)
    edx_6 = *(arg2 + 4)

char* ecx_15

if (&var_c u>= ecx_12 || edx_6 u> &var_c)
    if (ecx_12 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_15 = *(arg2 + 8)
    
    if (ecx_15 != 0)
        *ecx_15 = eax_16.b
else
    if (ecx_12 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_15 = *(arg2 + 8)
    
    if (ecx_15 != 0)
        eax_16.b = *(&var_c - edx_6 + *(arg2 + 4))
        *ecx_15 = eax_16.b
*(arg2 + 8) += 1
int32_t ecx_16 = *(arg2 + 8)
uint32_t eax_18 = ebx_5 u>> 0x10
char var_b = eax_18.b
int32_t edx_7

if (&var_b u< ecx_16)
    edx_7 = *(arg2 + 4)

char* ecx_19

if (&var_b u>= ecx_16 || edx_7 u> &var_b)
    if (ecx_16 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_19 = *(arg2 + 8)
    
    if (ecx_19 != 0)
        *ecx_19 = eax_18.b
else
    if (ecx_16 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_19 = *(arg2 + 8)
    
    if (ecx_19 != 0)
        eax_18.b = *(&var_b - edx_7 + *(arg2 + 4))
        *ecx_19 = eax_18.b
*(arg2 + 8) += 1
void* result = *(arg2 + 8)
uint8_t ebx_6 = (ebx_5 u>> 0x18).b
uint8_t var_a = ebx_6
int32_t ecx_20

if (&var_a u< result)
    ecx_20 = *(arg2 + 4)

if (&var_a u>= result || ecx_20 u> &var_a)
    if (result == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    result = *(arg2 + 8)
    
    if (result != 0)
        *result = ebx_6
else
    if (result == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    char* ecx_22 = *(arg2 + 8)
    
    if (ecx_22 != 0)
        result.b = *(&var_a - ecx_20 + *(arg2 + 4))
        *ecx_22 = result.b

*(arg2 + 8) += 1
int32_t** i_1 = *(ebp + 0x10)

if (i_1 != *(ebp + 0x14))
    char var_9 = 0
    
    do
        int32_t eax_19 = i_1[5]
        int32_t* i_5
        
        if (eax_19 u< 0x10)
            i_5 = i_1
        else
            i_5 = *i_1
        
        int32_t* i_3
        
        if (eax_19 u< 0x10)
            i_3 = i_1
        else
            i_3 = *i_1
        
        void* var_24_2 = arg2
        sub_468ff0(arg2 + 4, *(arg2 + 8), i_3, i_1[4] + i_5)
        int32_t ecx_25 = *(arg2 + 8)
        int32_t ebx_8
        
        if (&var_9 u< ecx_25)
            ebx_8 = *(arg2 + 4)
        
        if (&var_9 u>= ecx_25 || ebx_8 u> &var_9)
            int32_t edx_11 = *(arg2 + 0xc)
            
            if (ecx_25 == edx_11 && edx_11 - ecx_25 u< 1)
                int32_t ebx_11 = *(arg2 + 4)
                
                if (ebx_11 - ecx_25 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_12 = edx_11 - ebx_11
                uint32_t ebx_13 = edx_12 u>> 1
                uint32_t edx_13
                
                if (0xffffffff - ebx_13 u>= edx_12)
                    edx_13 = edx_12 + ebx_13
                else
                    edx_13 = 0
                
                if (edx_13 u< ecx_25 - ebx_11 + 1)
                    edx_13 = ecx_25 - ebx_11 + 1
                
                sub_403640(arg2 + 4, edx_13)
            
            result = *(arg2 + 8)
            
            if (result != 0)
                *result = 0
        else
            int32_t edx_8 = *(arg2 + 0xc)
            
            if (ecx_25 == edx_8 && edx_8 - ecx_25 u< 1)
                if (ebx_8 - ecx_25 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_9 = edx_8 - ebx_8
                uint32_t ebx_10 = edx_9 u>> 1
                uint32_t edx_10
                
                if (0xffffffff - ebx_10 u>= edx_9)
                    edx_10 = edx_9 + ebx_10
                else
                    edx_10 = 0
                
                if (edx_10 u< ecx_25 - ebx_8 + 1)
                    edx_10 = ecx_25 - ebx_8 + 1
                
                sub_403640(arg2 + 4, edx_10)
            
            char* ecx_29 = *(arg2 + 8)
            
            if (ecx_29 != 0)
                result.b = *(*(arg2 + 4) + &var_9 - ebx_8)
                *ecx_29 = result.b
            
            ebp = var_8
        
        *(arg2 + 8) += 1
        i_1 = &i_1[6]
    while (i_1 != *(ebp + 0x14))

result.b = 1
return result
