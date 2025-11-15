// 函数: sub_6a20e0
// 地址: 0x6a20e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_94
int32_t eax_1 = __security_cookie ^ &var_94
int32_t i = 0
int16_t* var_74 = arg7
int16_t var_44[0xd]
int32_t ecx

do
    if (i u>= 0x20)
        ___report_rangecheckfailure()
        noreturn
    
    ecx = 0
    *(&var_44 + i) = 0
    i += 2
while (i u<= 0x1e)

if (arg4 != 0)
    do
        uint32_t eax_2 = zx.d(*(arg2 + (ecx << 1)))
        ecx += 1
        var_44[eax_2] += 1
    while (ecx u< arg4)

int32_t ecx_1 = *arg6
void var_2a
void* eax_3 = &var_2a
int32_t edi_1 = 0xf

while (*(eax_3 + 4) == 0)
    if (*(eax_3 + 2) != 0)
        edi_1 -= 1
        break
    
    if (*eax_3 != 0)
        edi_1 -= 2
        break
    
    if (*(eax_3 - 2) != 0)
        edi_1 -= 3
        break
    
    if (*(eax_3 - 4) != 0)
        edi_1 -= 4
        break
    
    edi_1 -= 5
    eax_3 -= 0xa
    
    if (edi_1 u< 1)
        break

if (ecx_1 u> edi_1)
    ecx_1 = edi_1

int32_t result

if (edi_1 != 0)
    uint32_t ebx_1 = 1
    uint32_t var_68_1 = 1
    
    if (edi_1 u> 1)
        while (var_44[ebx_1] == 0)
            ebx_1 += 1
            
            if (ebx_1 u>= edi_1)
                break
        
        var_68_1 = ebx_1
    
    int32_t edx_1 = 1
    
    if (ecx_1 u< ebx_1)
        ecx_1 = ebx_1
    
    for (int32_t i_1 = 1; i_1 u<= 0xf; i_1 += 1)
        uint32_t eax_5 = zx.d(var_44[i_1])
        int32_t edx_2 = edx_1 * 2
        edx_1 = edx_2 - eax_5
        
        if (edx_2 - eax_5 s< 0)
            goto label_6a2577
    
    if (edx_1 s<= 0 || (arg3 != 0 && edi_1 == 1))
        int32_t i_2 = 2
        int16_t var_22 = 0
        void var_24
        
        do
            *(&var_22 + i_2) = *(&var_24 + i_2) + *(&var_44 + i_2)
            i_2 += 2
        while (i_2 u< 0x1e)
        
        int32_t ecx_7 = 0
        
        if (arg4 != 0)
            do
                uint32_t eax_7 = zx.d(*(arg2 + (ecx_7 << 1)))
                
                if (eax_7.w != 0)
                    *(arg7 + (zx.d(*(&var_24 + (eax_7 << 1))) << 1)) = ecx_7.w
                    uint32_t eax_9 = zx.d(*(arg2 + (ecx_7 << 1)))
                    *(&var_24 + (eax_9 << 1)) += 1
                
                ecx_7 += 1
            while (ecx_7 u< arg4)
        
        int32_t var_80_1
        void* const var_7c_1
        void* const var_78_1
        
        if (arg3 == 0)
            var_7c_1 = arg7
            var_78_1 = arg7
            var_80_1 = 0x14
        else if (arg3 == 1)
            var_78_1 = &data_772ea8
            var_7c_1 = &data_772ee8
            var_80_1 = 0x101
        else
            var_78_1 = &data_772e68
            var_7c_1 = &data_772f28
            var_80_1 = 0
        
        int32_t edx_4 = 0
        int32_t var_88_1 = 0
        int32_t var_90_1 = 0
        int32_t var_58_1 = 0xffffffff
        int32_t ebp_1 = 1 << ecx_1.b
        int32_t var_8c_1 = *arg5
        int32_t var_70_1 = ebp_1
        int32_t var_64_1 = ebp_1
        int32_t ecx_10 = ebp_1 - 1
        
        if (arg3 == 1)
            if (ebp_1 u<= 0x354)
                goto label_6a2378
            
        label_6a2360:
            result = 1
        else if (arg3 != 2 || ebp_1 u<= 0x250)
        label_6a2378:
            
            while (true)
                int32_t eax_14
                eax_14.b = ebx_1.b
                eax_14.b -= edx_4.b
                var_94:1.b = eax_14.b
                uint32_t edx_5 = zx.d(*var_74)
                
                if (edx_5 + 1 u>= var_80_1)
                    void* const eax_18
                    
                    if (edx_5 u< var_80_1)
                        var_94.b = 0x60
                        eax_18 = nullptr
                    else
                        int32_t ecx_12 = edx_5 - var_80_1
                        void* const eax_17
                        eax_17.b = *(var_7c_1 + (ecx_12 << 1))
                        var_94.b = eax_17.b
                        eax_18.w = *(var_78_1 + (ecx_12 << 1))
                    
                    var_94:2.w = eax_18.w
                else
                    var_94.b = 0
                    var_94:2.w = edx_5.w
                
                int32_t esi_3 = 1 << (ebx_1.b - var_90_1.b)
                int32_t edx_6 = ebp_1
                int32_t var_4c_1 = edx_6
                int32_t* ecx_17 = var_8c_1 + (((var_88_1 u>> var_90_1.b) + edx_6) << 2)
                int32_t eax_22 = var_94
                int32_t temp3_1
                
                do
                    ecx_17 -= esi_3 << 2
                    *ecx_17 = eax_22
                    temp3_1 = edx_6
                    edx_6 -= esi_3
                while (temp3_1 != esi_3)
                int32_t edx_7 = 1 << (ebx_1.b - 1)
                
                while ((var_88_1 & edx_7) != 0)
                    edx_7 u>>= 1
                
                int32_t ebp_3
                
                if (edx_7 == 0)
                    ebp_3 = 0
                    var_88_1 = 0
                else
                    int32_t eax_25 = ((edx_7 - 1) & var_88_1) + edx_7
                    ebp_3 = eax_25
                    var_88_1 = eax_25
                
                void* eax_27 = &var_74[1]
                int16_t temp4_1 = var_44[ebx_1]
                var_44[ebx_1] -= 1
                var_74 = eax_27
                
                if (temp4_1 == 1)
                    if (ebx_1 == edi_1)
                        if (ebp_3 != 0)
                            ebx_1.b -= var_90_1.b
                            var_94.b = 0x40
                            var_94:1.b = ebx_1.b
                            var_94:2.w = 0
                            *(var_8c_1 + (ebp_3 << 2)) = var_94
                        
                        *arg5 += var_64_1 << 2
                        *arg6 = ecx_1
                        break
                    
                    ebx_1 = zx.d(*(arg2 + (zx.d(*eax_27) << 1)))
                    var_68_1 = ebx_1
                
                edx_4 = var_90_1
                
                if (ebx_1 u<= ecx_1)
                    ebp_1 = var_70_1
                else
                    int32_t esi_5 = ecx_10 & ebp_3
                    ebp_1 = var_70_1
                    
                    if (esi_5 != var_58_1)
                        if (edx_4 == 0)
                            edx_4 = ecx_1
                        
                        int32_t ebx_2 = ebx_1 - edx_4
                        var_90_1 = edx_4
                        int32_t edx_8 = edx_4 + ebx_2
                        var_8c_1 += var_4c_1 << 2
                        int32_t eax_30 = 1 << ebx_2.b
                        
                        if (edx_8 u< edi_1)
                            void* esi_6 = &var_44[edx_8]
                            
                            do
                                int32_t eax_31 = eax_30 - zx.d(*esi_6)
                                
                                if (eax_31 s<= 0)
                                    break
                                
                                edx_8 += 1
                                ebx_2 += 1
                                esi_6 += 2
                                eax_30 = eax_31 * 2
                            while (edx_8 u< edi_1)
                        
                        ebp_1 = 1 << ebx_2.b
                        int32_t eax_33 = var_64_1 + ebp_1
                        var_70_1 = ebp_1
                        var_64_1 = eax_33
                        bool cond:2_1
                        
                        if (arg3 == 1)
                            cond:2_1 = eax_33 u> 0x354
                        label_6a24fe:
                            
                            if (cond:2_1)
                                goto label_6a2360_1
                        else if (arg3 == 2)
                            cond:2_1 = eax_33 u> 0x250
                            goto label_6a24fe
                        var_58_1 = esi_5
                        *(*arg5 + (esi_5 << 2)) = ebx_2.b
                        ebx_1 = var_68_1
                        *(*arg5 + (esi_5 << 2) + 1) = ecx_1.b
                        int32_t ecx_28 = *arg5
                        edx_4 = var_90_1
                        *(ecx_28 + (esi_5 << 2) + 2) = ((var_8c_1 - ecx_28) s>> 2).w
            
            result = 0
        else
        label_6a2360_1:
            result = 1
    else
    label_6a2577:
        result = 0xffffffff
else
    int32_t* ecx_2 = *arg5
    var_94 = 0x140
    int32_t eax_4 = var_94
    *ecx_2 = eax_4
    *arg5 += 4
    **arg5 = eax_4
    *arg5 += 4
    *arg6 = 1
    result = 0

@__security_check_cookie@4(eax_1 ^ &var_94)
return result
