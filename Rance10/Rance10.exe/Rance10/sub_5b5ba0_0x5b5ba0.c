// 函数: sub_5b5ba0
// 地址: 0x5b5ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg4
void* esi_2 = arg2
void* eax_4 = edi - 0x6c
void** var_33c = arg3
void* i = (edi - arg2) s/ 0xd8 * 0x6c + esi_2
sub_5b60a0(eax_4, i, esi_2, eax_4)
void* ecx_1 = i + 0x6c
void* var_32c = ecx_1

for (; esi_2 u< i; i -= 0x6c)
    int32_t xmm0_1 = *(i - 4)
    int32_t xmm1_1 = *(i + 0x68)
    
    if (xmm0_1 f< xmm1_1)
        break
    
    if (xmm1_1 f< xmm0_1)
        break

if (ecx_1 u< edi)
    int32_t xmm1_2 = *(i + 0x68)
    
    do
        int32_t xmm0_2 = *(ecx_1 + 0x68)
        
        if (xmm0_2 f< xmm1_2)
            break
        
        if (xmm1_2 f< xmm0_2)
            break
        
        ecx_1 += 0x6c
    while (ecx_1 u< edi)
    
    var_32c = ecx_1

void* i_1 = i
void* edx_3 = ecx_1
void* i_3 = i_1

while (true)
    void* var_328_1 = edx_3
    
    while (true)
        if (edx_3 u< edi)
            void* esi_3 = ecx_1 - 0x6c
            
            do
                int32_t xmm0_3 = *(i + 0x68)
                int32_t xmm1_3 = *(edx_3 + 0x68)
                
                if (not(xmm0_3 f< xmm1_3))
                    if (xmm1_3 f< xmm0_3)
                        break
                    
                    void* eax_5 = ecx_1
                    esi_3 += 0x6c
                    ecx_1 += 0x6c
                    var_32c = ecx_1
                    
                    if (eax_5 != edx_3)
                        void var_318
                        __builtin_memcpy(&var_318, esi_3, 0x6c)
                        __builtin_memcpy(esi_3, edx_3, 0x6c)
                        __builtin_memcpy(edx_3, &var_318, 0x6c)
                        ecx_1 = var_32c
                        edi = arg4
                
                edx_3 += 0x6c
            while (edx_3 u< edi)
            
            i_1 = i_3
            esi_2 = arg2
            var_328_1 = edx_3
        
        bool cond:0_1 = i_1 != esi_2
        
        if (i_1 u> esi_2)
            do
                int32_t xmm0_4 = *(i_1 - 4)
                int32_t xmm1_4 = *(i + 0x68)
                
                if (not(xmm0_4 f< xmm1_4))
                    if (xmm1_4 f< xmm0_4)
                        break
                    
                    i -= 0x6c
                    
                    if (i != i_1 - 0x6c)
                        void var_2a8
                        __builtin_memcpy(&var_2a8, i, 0x6c)
                        __builtin_memcpy(i, i_1 - 0x6c, 0x6c)
                        __builtin_memcpy(i_1 - 0x6c, &var_2a8, 0x6c)
                        esi_2 = arg2
                
                i_1 -= 0x6c
            while (esi_2 u< i_1)
            
            edi = arg4
            cond:0_1 = i_1 != esi_2
            i_3 = i_1
        
        if (cond:0_1)
            i_1 -= 0x6c
            i_3 = i_1
            
            if (edx_3 != edi)
                break
            
            i -= 0x6c
            
            if (i_1 != i)
                void var_158
                __builtin_memcpy(&var_158, i_1, 0x6c)
                __builtin_memcpy(i_1, i, 0x6c)
                __builtin_memcpy(i, &var_158, 0x6c)
            
            var_32c -= 0x6c
            void var_e8
            __builtin_memcpy(&var_e8, i, 0x6c)
            __builtin_memcpy(i, var_32c, 0x6c)
            __builtin_memcpy(var_32c, &var_e8, 0x6c)
            ecx_1 = var_32c
            edi = arg4
            esi_2 = arg2
        else
            if (edx_3 == edi)
                *arg3 = i
                arg3[1] = var_32c
                return arg3
            
            if (var_32c != edx_3)
                void var_238
                __builtin_memcpy(&var_238, i, 0x6c)
                __builtin_memcpy(i, var_32c, 0x6c)
                __builtin_memcpy(var_32c, &var_238, 0x6c)
            
            var_32c += 0x6c
            void* i_2 = i
            i += 0x6c
            var_328_1 += 0x6c
            void var_1c8
            __builtin_memcpy(&var_1c8, i_2, 0x6c)
            i_1 = i_3
            __builtin_memcpy(i_2, edx_3, 0x6c)
            void* edi_8 = edx_3
            edx_3 = var_328_1
            __builtin_memcpy(edi_8, &var_1c8, 0x6c)
            ecx_1 = var_32c
            edi = arg4
            esi_2 = arg2
    
    void var_78
    __builtin_memcpy(&var_78, edx_3, 0x6c)
    void* edi_13 = edx_3
    edx_3 += 0x6c
    __builtin_memcpy(edi_13, i_1, 0x6c)
    __builtin_memcpy(i_1, &var_78, 0x6c)
    ecx_1 = var_32c
    edi = arg4
    esi_2 = arg2
