// 函数: sub_6252a0
// 地址: 0x6252a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_90
int32_t eax_1 = __security_cookie ^ &var_90
void* ebp = arg7
int32_t i = 0
void* var_80 = ebp
int16_t var_44[0x10]
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

uint32_t eax_3 = *arg6
uint32_t edi_1 = 0xf

while (var_44[edi_1] == 0)
    edi_1 -= 1
    
    if (edi_1 u< 1)
        break

if (eax_3 u> edi_1)
    eax_3 = edi_1

int32_t result

if (edi_1 != 0)
    uint32_t ebx_1 = 1
    uint32_t var_6c_1 = 1
    
    if (edi_1 u> 1)
        while (var_44[ebx_1] == 0)
            ebx_1 += 1
            
            if (ebx_1 u>= edi_1)
                break
        
        var_6c_1 = ebx_1
    
    int32_t edx_1 = 1
    int32_t i_1 = 1
    
    if (eax_3 u< ebx_1)
        eax_3 = ebx_1
    
    do
        uint32_t eax_5 = zx.d(var_44[i_1])
        int32_t edx_2 = edx_1 * 2
        edx_1 = edx_2 - eax_5
        
        if (edx_2 - eax_5 s< 0)
            goto label_6256ec
        
        i_1 += 1
    while (i_1 u<= 0xf)
    
    if (edx_1 s<= 0 || (arg3 != 0 && edi_1 == 1))
        int32_t i_2 = 2
        int16_t var_22 = 0
        void var_24
        
        do
            *(&var_22 + i_2) = *(&var_24 + i_2) + *(&var_44 + i_2)
            i_2 += 2
        while (i_2 u< 0x1e)
        
        int32_t ecx_6 = 0
        
        if (arg4 != 0)
            do
                uint32_t eax_7 = zx.d(*(arg2 + (ecx_6 << 1)))
                
                if (eax_7.w != 0)
                    *(ebp + (zx.d(*(&var_24 + (eax_7 << 1))) << 1)) = ecx_6.w
                    uint32_t eax_9 = zx.d(*(arg2 + (ecx_6 << 1)))
                    *(&var_24 + (eax_9 << 1)) += 1
                
                ecx_6 += 1
            while (ecx_6 u< arg4)
        
        int32_t var_70_1
        uint32_t var_68_1
        void* const var_60_1
        
        if (arg3 == 0)
            var_60_1 = ebp
            var_68_1 = ebp
            var_70_1 = 0x13
        else if (arg3 == 1)
            var_68_1 = 0x6f0336
            var_60_1 = &data_6f02b6
            var_70_1 = 0x100
        else
            var_68_1 = 0x6f04f8
            var_60_1 = &data_6f0578
            var_70_1 = 0xffffffff
        
        int32_t var_84_1 = 0
        uint32_t var_8c_1 = 0
        int32_t var_54_1 = 0xffffffff
        int32_t edx_4 = 1 << eax_3.b
        int32_t var_88_1 = *arg5
        int32_t var_74_1 = edx_4
        int32_t var_64_1 = edx_4
        int32_t eax_13 = edx_4 - 1
        
        if (arg3 == 1)
            if (edx_4 u< 0x354)
                goto label_625500
            
        label_6254ec:
            result = 1
        else if (arg3 != 2 || edx_4 u< 0x250)
        label_625500:
            
            while (true)
                uint32_t eax_14
                eax_14.b = ebx_1.b
                eax_14.b -= var_8c_1.b
                var_90:1.b = eax_14.b
                uint32_t eax_15 = zx.d(*ebp)
                
                if (eax_15 s< var_70_1)
                    var_90.b = 0
                else if (eax_15 s<= var_70_1)
                    var_90.b = 0x60
                    eax_15 = 0
                else
                    void* const eax_16
                    eax_16.b = *(var_60_1 + (eax_15 << 1))
                    var_90.b = eax_16.b
                    eax_15.w = *(var_68_1 + (eax_15 << 1))
                
                var_90:2.w = eax_15.w
                int32_t esi_2 = 1 << (ebx_1.b - var_8c_1.b)
                int32_t var_48_1 = edx_4
                int32_t* ecx_14 = var_88_1 + (((var_84_1 u>> var_8c_1.b) + edx_4) << 2)
                int32_t eax_20 = var_90
                int32_t temp3_1
                
                do
                    ecx_14 -= esi_2 << 2
                    *ecx_14 = eax_20
                    temp3_1 = edx_4
                    edx_4 -= esi_2
                while (temp3_1 != esi_2)
                int32_t edx_5 = 1 << (ebx_1.b - 1)
                
                while ((var_84_1 & edx_5) != 0)
                    edx_5 u>>= 1
                
                int32_t edx_6
                
                if (edx_5 == 0)
                    edx_6 = 0
                else
                    edx_6 = edx_5 + ((edx_5 - 1) & var_84_1)
                
                ebp = var_80 + 2
                var_84_1 = edx_6
                int16_t temp4_1 = var_44[ebx_1]
                var_44[ebx_1] -= 1
                var_80 = ebp
                
                if (temp4_1 == 1)
                    if (ebx_1 == edi_1)
                        if (edx_6 != 0)
                            ebx_1.b -= var_8c_1.b
                            var_90.b = 0x40
                            var_90:1.b = ebx_1.b
                            var_90:2.w = 0
                            *(var_88_1 + (edx_6 << 2)) = var_90
                        
                        *arg5 += var_64_1 << 2
                        *arg6 = eax_3
                        break
                    
                    ebx_1 = zx.d(*(arg2 + (zx.d(*ebp) << 1)))
                    var_6c_1 = ebx_1
                
                if (ebx_1 u<= eax_3)
                    edx_4 = var_74_1
                else
                    int32_t ebp_5 = eax_13 & edx_6
                    edx_4 = var_74_1
                    
                    if (ebp_5 != var_54_1)
                        uint32_t edx_7 = var_8c_1
                        
                        if (edx_7 == 0)
                            edx_7 = eax_3
                        
                        uint32_t ebx_2 = ebx_1 - edx_7
                        var_8c_1 = edx_7
                        uint32_t edx_8 = edx_7 + ebx_2
                        var_88_1 += var_48_1 << 2
                        int32_t eax_25 = 1 << ebx_2.b
                        
                        if (edx_8 u< edi_1)
                            void* esi_3 = &var_44[edx_8]
                            
                            do
                                int32_t eax_26 = eax_25 - zx.d(*esi_3)
                                
                                if (eax_26 s<= 0)
                                    break
                                
                                edx_8 += 1
                                ebx_2 += 1
                                esi_3 += 2
                                eax_25 = eax_26 * 2
                            while (edx_8 u< edi_1)
                        
                        edx_4 = 1 << ebx_2.b
                        int32_t esi_5 = var_64_1 + edx_4
                        var_74_1 = edx_4
                        var_64_1 = esi_5
                        bool cond:4_1
                        
                        if (arg3 == 1)
                            cond:4_1 = esi_5 u>= 0x354
                        label_625677:
                            
                            if (cond:4_1)
                                goto label_6254ec_1
                        else if (arg3 == 2)
                            cond:4_1 = esi_5 u>= 0x250
                            goto label_625677
                        var_54_1 = ebp_5
                        *(*arg5 + (ebp_5 << 2)) = ebx_2.b
                        ebx_1 = var_6c_1
                        *(*arg5 + (ebp_5 << 2) + 1) = eax_3.b
                        int32_t ecx_24 = *arg5
                        *(ecx_24 + (ebp_5 << 2) + 2) = ((var_88_1 - ecx_24) s>> 2).w
                    
                    ebp = var_80
            
            result = 0
        else
        label_6254ec_1:
            result = 1
    else
    label_6256ec:
        result = 0xffffffff
else
    int32_t* ecx_1 = *arg5
    var_90 = 0x140
    int32_t eax_4 = var_90
    *ecx_1 = eax_4
    *arg5 += 4
    **arg5 = eax_4
    *arg5 += 4
    *arg6 = 1
    result = 0

sub_69a5bc(eax_1 ^ &var_90)
return result
