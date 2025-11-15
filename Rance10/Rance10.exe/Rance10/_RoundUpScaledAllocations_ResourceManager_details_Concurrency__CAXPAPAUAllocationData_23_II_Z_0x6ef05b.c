// 函数: ?RoundUpScaledAllocations@ResourceManager@details@Concurrency@@CAXPAPAUAllocationData@23@II@Z
// 地址: 0x6ef05b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

long double result = float.t(0)
int32_t edx = 0
long double result_2 = result
int32_t esi = 0
int32_t var_18 = 0
int32_t var_8 = 0

if (arg2 != 0)
    do
        void* esi_1 = *(arg1 + (esi << 2))
        *(esi_1 + 4) = __ftol2(fconvert.t(*(esi_1 + 8)))
        void* ecx_1 = *(arg1 + (var_8 << 2))
        long double x87_r5_2 = float.t(*(ecx_1 + 4))
        
        if (*(ecx_1 + 4) s< 0)
            x87_r5_2 = x87_r5_2 + fconvert.t(4294967296.0)
        
        esi = var_8 + 1
        var_8 = esi
        *(ecx_1 + 8) = fconvert.d(fconvert.t(*(ecx_1 + 8)) - fconvert.t(fconvert.d(x87_r5_2)))
    while (esi u< arg2)
    
    edx = 0

long double result_1 = fconvert.t(9.9999999999999995e-08)
void* esi_3 = nullptr
void* var_10 = nullptr
void* eax

if (arg2 != 0)
    do
        eax = esi_3 + 1
        void* var_8_1 = esi_3
        void* edx_1 = eax
        
        if (eax u< arg2)
            int32_t esi_4 = esi_3 << 2
            void* eax_3
            
            do
                long double x87_r4_2 = fconvert.t(*(*(esi_4 + arg1) + 8)) + result_1
                long double temp1_1 = fconvert.t(*(*(arg1 + (edx_1 << 2)) + 8))
                x87_r4_2 - temp1_1
                void* eax_2
                eax_2.w = (x87_r4_2 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r4_2 == temp1_1 ? 1 : 0) << 0xe | 0x2800
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    eax_3 = var_8_1
                else
                    eax_3 = edx_1
                    var_8_1 = eax_3
                    esi_4 = edx_1 << 2
                
                edx_1 += 1
            while (edx_1 u< arg2)
            
            if (var_10 != eax_3)
                int32_t ecx_3 = *(arg1 + (var_10 << 2))
                *(arg1 + (var_10 << 2)) = *(arg1 + (eax_3 << 2))
                *(arg1 + (var_8_1 << 2)) = ecx_3
        
        esi_3 = eax
        var_10 = esi_3
    while (esi_3 u< arg2)
    
    edx = 0

int32_t ecx_4 = arg2 - 1
int32_t esi_7 = 0

if (arg2 == 0)
    result = result_1
else
    while (true)
        long double result_4 = result_2
        
        while (true)
            result_4 - result_1
            eax.w = (result_4 < result_1 ? 1 : 0) << 8
                | (is_unordered.t(result_4, result_1) ? 1 : 0) << 0xa
                | (result_4 == result_1 ? 1 : 0) << 0xe | 0x2000
            
            if ((eax:1.b & 0x41) != 0)
                break
            
            long double result_3 = result_1
            long double result_7 = result_4
            long double temp2_1 = fconvert.t(*(*(arg1 + (ecx_4 << 2)) + 8))
            result_3 - temp2_1
            eax.w = (result_3 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(result_3, temp2_1) ? 1 : 0) << 0xa
                | (result_3 == temp2_1 ? 1 : 0) << 0xe | 0x2000
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                while (true)
                    eax = *(arg1 + (ecx_4 << 2))
                    result_1 = result_3
                    ecx_4 -= 1
                    long double result_6 = result_7 - fconvert.t(*(eax + 8))
                    *(eax + 8) = fconvert.d(result)
                    result_4 = result_6
                    result_4 - result_1
                    eax.w = (result_4 < result_1 ? 1 : 0) << 8
                        | (is_unordered.t(result_4, result_1) ? 1 : 0) << 0xa
                        | (result_4 == result_1 ? 1 : 0) << 0xe | 0x2000
                    
                    if ((eax:1.b & 0x41) != 0)
                        break
                    
                    result_3 = result_1
                    result_7 = result_4
            else
                ecx_4 -= 1
                result_4 = result_7
                result_1 = result_3
        
        if (esi_7 u> ecx_4)
            break
        
        long double result_5 = result_4
        long double temp3_1 = fconvert.t(*(*(arg1 + (esi_7 << 2)) + 8))
        result_1 - temp3_1
        eax.w = (result_1 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(result_1, temp3_1) ? 1 : 0) << 0xa
            | (result_1 == temp3_1 ? 1 : 0) << 0xe | 0x2000
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            void* eax_6 = *(arg1 + (esi_7 << 2))
            result_5 = result_5 + float.t(1) - fconvert.t(*(eax_6 + 8))
            *(eax_6 + 8) = fconvert.d(result)
            eax = *(arg1 + (esi_7 << 2))
            *(eax + 4) += 1
        
        esi_7 += 1
        
        if (esi_7 u>= arg2)
            break
        
        result_1 = result_1
        result_2 = result_5

if (arg2 != 0)
    do
        int32_t eax_12 = edx + 1
        int32_t var_8_2 = edx
        int32_t esi_8 = eax_12
        
        if (eax_12 u< arg2)
            int32_t edx_2 = edx << 2
            int32_t eax_9
            
            do
                if (**(arg1 + (esi_8 << 2)) u>= **(edx_2 + arg1))
                    eax_9 = var_8_2
                else
                    eax_9 = esi_8
                    var_8_2 = eax_9
                    edx_2 = esi_8 << 2
                
                esi_8 += 1
            while (esi_8 u< arg2)
            
            if (var_18 != eax_9)
                int32_t ecx_6 = *(arg1 + (var_18 << 2))
                *(arg1 + (var_18 << 2)) = *(arg1 + (eax_9 << 2))
                *(arg1 + (var_8_2 << 2)) = ecx_6
        
        edx = eax_12
        var_18 = edx
    while (edx u< arg2)

return result
