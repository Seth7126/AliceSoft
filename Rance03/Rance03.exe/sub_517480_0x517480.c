// 函数: sub_517480
// 地址: 0x517480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0xb4)
int32_t* esi = *(arg1 + 0xb0)
int32_t ebp = 0
void* var_4 = arg1
uint32_t edx_3 = (result - esi + 3) u>> 2

if (esi u> result)
    edx_3 = 0

uint32_t var_10 = edx_3

if (edx_3 != 0)
    do
        void* edi_1 = *(*esi + 4)
        int32_t edi_2
        
        if (edi_1 != 0)
            edi_2 = *(edi_1 + 8)
        else
            edi_2 = 0xffffffff
        
        result = arg2[1]
        int32_t var_14 = edi_2
        int32_t ecx
        
        if (&var_14 u< result)
            ecx = *arg2
            edx_3 = var_10
        
        if (&var_14 u>= result || ecx u> &var_14)
            if (result == arg2[2])
                sub_415950(arg2, 1)
                edx_3 = var_10
            
            result = arg2[1]
            
            if (result != 0)
                *result = edi_2
        else
            if (result == arg2[2])
                result = sub_415950(arg2, 1)
                edx_3 = var_10
            
            void** ecx_2 = arg2[1]
            
            if (ecx_2 != 0)
                result = *(*arg2 + ((&var_14 - ecx) s>> 2 << 2))
                *ecx_2 = result
        
        arg2[1] += 4
        ebp += 1
        esi = &esi[1]
    while (ebp != edx_3)
    
    arg1 = var_4

int32_t* esi_1 = *(arg1 + 0xbc)
int32_t edi_5 = *(arg1 + 0xc0)

if (esi_1 != edi_5)
    do
        void* eax_3 = *(*esi_1 + 4)
        int32_t ebp_1
        
        if (eax_3 != 0)
            ebp_1 = *(eax_3 + 8)
        else
            ebp_1 = 0xffffffff
        
        int32_t ecx_4 = arg2[1]
        int32_t var_c = ebp_1
        
        if (&var_c u< ecx_4)
            result = *arg2
        
        if (&var_c u>= ecx_4 || result u> &var_c)
            int32_t edx_8 = arg2[2]
            
            if (ecx_4 == edx_8 && (edx_8 - ecx_4) s>> 2 u< 1)
                int32_t ecx_13 = (ecx_4 - *arg2) s>> 2
                
                if (0x3fffffff - ecx_13 u< 1)
                    goto label_517794
                
                int32_t edx_10 = (edx_8 - *arg2) s>> 2
                uint32_t ecx_16 = edx_10 u>> 1
                int32_t* edx_11
                
                if (0x3fffffff - ecx_16 u>= edx_10)
                    edx_11 = edx_10 + ecx_16
                else
                    edx_11 = nullptr
                
                if (edx_11 u< ecx_13 + 1)
                    edx_11 = ecx_13 + 1
                
                sub_412f90(arg2, edx_11)
            
            result = arg2[1]
            
            if (result != 0)
                *result = ebp_1
        else
            int32_t edx_4 = arg2[2]
            int32_t ebp_3 = (&var_c - result) s>> 2
            
            if (ecx_4 == edx_4)
                result = (edx_4 - ecx_4) s>> 2
                
                if (result u< 1)
                    int32_t ecx_6 = (ecx_4 - *arg2) s>> 2
                    
                    if (0x3fffffff - ecx_6 u< 1)
                        goto label_517794
                    
                    int32_t edx_6 = (edx_4 - *arg2) s>> 2
                    uint32_t ecx_9 = edx_6 u>> 1
                    int32_t edx_7
                    
                    if (0x3fffffff - ecx_9 u>= edx_6)
                        edx_7 = edx_6 + ecx_9
                    else
                        edx_7 = 0
                    
                    if (edx_7 u< ecx_6 + 1)
                        edx_7 = ecx_6 + 1
                    
                    result = sub_412f90(arg2, edx_7)
            
            void** ecx_11 = arg2[1]
            
            if (ecx_11 != 0)
                result = *(*arg2 + (ebp_3 << 2))
                *ecx_11 = result
        
        arg2[1] += 4
        esi_1 = &esi_1[1]
    while (esi_1 != edi_5)
    
    arg1 = var_4

int32_t* esi_2 = *(arg1 + 0xd4)
int32_t edi_6 = *(arg1 + 0xd8)

if (esi_2 == edi_6)
    return result

while (true)
    void* ebp_4 = *(*esi_2 + 4)
    int32_t ebp_5
    
    if (ebp_4 != 0)
        ebp_5 = *(ebp_4 + 8)
    else
        ebp_5 = 0xffffffff
    
    int32_t ecx_18 = arg2[1]
    int32_t var_8 = ebp_5
    
    if (&var_8 u< ecx_18)
        result = *arg2
    
    if (&var_8 u>= ecx_18 || result u> &var_8)
        int32_t edx_16 = arg2[2]
        
        if (ecx_18 == edx_16 && (edx_16 - ecx_18) s>> 2 u< 1)
            int32_t ecx_27 = (ecx_18 - *arg2) s>> 2
            
            if (0x3fffffff - ecx_27 u< 1)
                break
            
            int32_t edx_18 = (edx_16 - *arg2) s>> 2
            uint32_t ecx_30 = edx_18 u>> 1
            int32_t* edx_19
            
            if (0x3fffffff - ecx_30 u>= edx_18)
                edx_19 = edx_18 + ecx_30
            else
                edx_19 = nullptr
            
            if (edx_19 u< ecx_27 + 1)
                edx_19 = ecx_27 + 1
            
            sub_412f90(arg2, edx_19)
        
        result = arg2[1]
        
        if (result != 0)
            *result = ebp_5
    else
        int32_t edx_12 = arg2[2]
        int32_t ebp_7 = (&var_8 - result) s>> 2
        
        if (ecx_18 == edx_12)
            result = (edx_12 - ecx_18) s>> 2
            
            if (result u< 1)
                int32_t ecx_20 = (ecx_18 - *arg2) s>> 2
                
                if (0x3fffffff - ecx_20 u< 1)
                    break
                
                int32_t edx_14 = (edx_12 - *arg2) s>> 2
                uint32_t ecx_23 = edx_14 u>> 1
                int32_t* edx_15
                
                if (0x3fffffff - ecx_23 u>= edx_14)
                    edx_15 = edx_14 + ecx_23
                else
                    edx_15 = nullptr
                
                if (edx_15 u< ecx_20 + 1)
                    edx_15 = ecx_20 + 1
                
                result = sub_412f90(arg2, edx_15)
        
        void** ecx_25 = arg2[1]
        
        if (ecx_25 != 0)
            result = *(*arg2 + (ebp_7 << 2))
            *ecx_25 = result
    
    arg2[1] += 4
    esi_2 = &esi_2[1]
    
    if (esi_2 == edi_6)
        return result

label_517794:
sub_69a551("vector<T> too long")
noreturn
