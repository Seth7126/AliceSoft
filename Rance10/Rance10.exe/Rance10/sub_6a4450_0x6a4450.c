// 函数: sub_6a4450
// 地址: 0x6a4450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == 0 || arg2 == 0)
    return 

if ((*(arg2 + 0xe8) & arg4 & 0x4000) != 0)
    if (arg5 == 0xffffffff)
        int32_t i = 0
        
        if (*(arg2 + 0x80) s> 0)
            do
                sub_6a4450(0x4000, i)
                i += 1
            while (i s< *(arg2 + 0x80))
        
        int32_t eax_4 = *(arg2 + 0x88)
        
        if (eax_4 != 0)
            int32_t ecx_3 = *(arg3 + 0x278)
            
            if (ecx_3 == 0)
                _free(eax_4)
            else
                ecx_3(arg3, eax_4)
        
        *(arg2 + 0x88) = 0
        *(arg2 + 0x80) = 0
    else
        int32_t eax_2 = *(arg2 + 0x88)
        
        if (eax_2 != 0)
            int32_t ebx_2 = arg5 * 7
            int32_t edx = *(eax_2 + (ebx_2 << 2) + 4)
            
            if (edx != 0)
                sub_6a7cf0(arg3, edx)
                *(*(arg2 + 0x88) + (ebx_2 << 2) + 4) = 0

if ((*(arg2 + 0xe8) & arg4 & 0x2000) != 0)
    int32_t eax_7 = *(arg2 + 0x9c)
    
    if (eax_7 != 0)
        int32_t ecx_4 = *(arg3 + 0x278)
        
        if (ecx_4 == 0)
            _free(eax_7)
        else
            ecx_4(arg3, eax_7)
    
    *(arg2 + 8) &= 0xffffffef
    *(arg2 + 0x9c) = 0

if ((*(arg2 + 0xe8) & arg4 & 0x100) != 0)
    int32_t eax_10 = *(arg2 + 0x100)
    
    if (eax_10 != 0)
        int32_t ecx_5 = *(arg3 + 0x278)
        
        if (ecx_5 == 0)
            _free(eax_10)
        else
            ecx_5(arg3, eax_10)
    
    int32_t eax_11 = *(arg2 + 0x104)
    
    if (eax_11 != 0)
        int32_t ecx_6 = *(arg3 + 0x278)
        
        if (ecx_6 == 0)
            _free(eax_11)
        else
            ecx_6(arg3, eax_11)
    
    *(arg2 + 8) &= 0xffffbfff
    *(arg2 + 0x100) = 0
    *(arg2 + 0x104) = 0

if (((*(arg2 + 0xe8)).b & arg4.b) s< 0)
    int32_t eax_14 = *(arg2 + 0xd0)
    
    if (eax_14 != 0)
        int32_t ecx_7 = *(arg3 + 0x278)
        
        if (ecx_7 == 0)
            _free(eax_14)
        else
            ecx_7(arg3, eax_14)
    
    int32_t eax_15 = *(arg2 + 0xdc)
    
    if (eax_15 != 0)
        int32_t ecx_8 = *(arg3 + 0x278)
        
        if (ecx_8 == 0)
            _free(eax_15)
        else
            ecx_8(arg3, eax_15)
    
    int32_t ecx_9 = *(arg2 + 0xe0)
    *(arg2 + 0xd0) = 0
    *(arg2 + 0xdc) = 0
    
    if (ecx_9 != 0)
        int32_t ebx_3 = 0
        
        if (*(arg2 + 0xe5) u> 0)
            uint32_t eax_17
            
            do
                int32_t eax_16 = *(ecx_9 + (ebx_3 << 2))
                
                if (eax_16 != 0)
                    int32_t ecx_10 = *(arg3 + 0x278)
                    
                    if (ecx_10 == 0)
                        _free(eax_16)
                    else
                        ecx_10(arg3, eax_16)
                
                ecx_9 = *(arg2 + 0xe0)
                eax_17 = zx.d(*(arg2 + 0xe5))
                *(ecx_9 + (ebx_3 << 2)) = 0
                ebx_3 += 1
            while (ebx_3 u< eax_17)
        
        int32_t eax_18 = *(arg2 + 0xe0)
        
        if (eax_18 != 0)
            int32_t ecx_11 = *(arg3 + 0x278)
            
            if (ecx_11 == 0)
                _free(eax_18)
            else
                ecx_11(arg3, eax_18)
        
        *(arg2 + 0xe0) = 0
    
    *(arg2 + 8) &= 0xfffffbff

if (((*(arg2 + 0xe8)).b & arg4.b & 0x10) != 0)
    int32_t eax_21 = *(arg2 + 0x74)
    
    if (eax_21 != 0)
        int32_t ecx_12 = *(arg3 + 0x278)
        
        if (ecx_12 == 0)
            _free(eax_21)
        else
            ecx_12(arg3, eax_21)
    
    int32_t eax_22 = *(arg2 + 0x78)
    
    if (eax_22 != 0)
        int32_t ecx_13 = *(arg3 + 0x278)
        
        if (ecx_13 == 0)
            _free(eax_22)
        else
            ecx_13(arg3, eax_22)
    
    *(arg2 + 8) &= 0xffffefff
    *(arg2 + 0x74) = 0
    *(arg2 + 0x78) = 0

if (((*(arg2 + 0xe8)).b & arg4.b & 0x20) != 0)
    if (arg5 == 0xffffffff)
        int32_t eax_30 = *(arg2 + 0xf8)
        
        if (eax_30 != 0)
            int32_t i_1 = 0
            
            if (eax_30 s> 0)
                do
                    sub_6a4450(0x20, i_1)
                    i_1 += 1
                while (i_1 s< *(arg2 + 0xf8))
            
            int32_t eax_31 = *(arg2 + 0xf4)
            
            if (eax_31 != 0)
                int32_t ecx_18 = *(arg3 + 0x278)
                
                if (ecx_18 == 0)
                    _free(eax_31)
                else
                    ecx_18(arg3, eax_31)
            
            *(arg2 + 0xf4) = 0
            *(arg2 + 0xf8) = 0
        
        *(arg2 + 8) &= 0xffffdfff
    else
        int32_t eax_25 = *(arg2 + 0xf4)
        
        if (eax_25 != 0)
            int32_t ebx_5 = arg5 * 2
            int32_t eax_26 = *(eax_25 + (ebx_5 << 3))
            
            if (eax_26 != 0)
                int32_t ecx_15 = *(arg3 + 0x278)
                
                if (ecx_15 == 0)
                    _free(eax_26)
                else
                    ecx_15(arg3, eax_26)
            
            int32_t eax_28 = *(*(arg2 + 0xf4) + (ebx_5 << 3) + 8)
            
            if (eax_28 != 0)
                int32_t ecx_16 = *(arg3 + 0x278)
                
                if (ecx_16 == 0)
                    _free(eax_28)
                else
                    ecx_16(arg3, eax_28)
            
            int32_t eax_29 = *(arg2 + 0xf4)
            *(eax_29 + (ebx_5 << 3)) = 0
            *(eax_29 + (ebx_5 << 3) + 8) = 0

if ((*(arg2 + 0xe8) & arg4 & 0x200) != 0)
    if (arg5 == 0xffffffff)
        int32_t eax_38 = *(arg2 + 0xf0)
        
        if (eax_38 != 0)
            int32_t i_2 = 0
            
            if (eax_38 s> 0)
                do
                    sub_6a4450(0x200, i_2)
                    i_2 += 1
                while (i_2 s< *(arg2 + 0xf0))
            
            int32_t eax_39 = *(arg2 + 0xec)
            
            if (eax_39 != 0)
                int32_t ecx_22 = *(arg3 + 0x278)
                
                if (ecx_22 == 0)
                    _free(eax_39)
                else
                    ecx_22(arg3, eax_39)
            
            *(arg2 + 0xec) = 0
            *(arg2 + 0xf0) = 0
    else
        int32_t eax_34 = *(arg2 + 0xec)
        
        if (eax_34 != 0)
            int32_t ebx_6 = arg5 * 5
            int32_t eax_35 = *(eax_34 + (ebx_6 << 2) + 8)
            
            if (eax_35 == 0)
                *(*(arg2 + 0xec) + (ebx_6 << 2) + 8) = 0
            else
                int32_t ecx_20 = *(arg3 + 0x278)
                
                if (ecx_20 == 0)
                    _free(eax_35)
                    *(*(arg2 + 0xec) + (ebx_6 << 2) + 8) = 0
                else
                    ecx_20(arg3, eax_35)
                    *(*(arg2 + 0xec) + (ebx_6 << 2) + 8) = 0

if (((*(arg2 + 0xe8)).b & arg4.b & 8) != 0)
    int32_t eax_42 = *(arg2 + 0xcc)
    
    if (eax_42 != 0)
        int32_t ecx_23 = *(arg3 + 0x278)
        
        if (ecx_23 == 0)
            _free(eax_42)
        else
            ecx_23(arg3, eax_42)
    
    *(arg2 + 8) &= 0xffffffbf
    *(arg2 + 0xcc) = 0

if ((*(arg2 + 0xe8) & arg4 & 0x1000) != 0)
    int32_t eax_45 = *(arg2 + 0x10)
    
    if (eax_45 != 0)
        int32_t ecx_24 = *(arg3 + 0x278)
        
        if (ecx_24 == 0)
            _free(eax_45)
        else
            ecx_24(arg3, eax_45)
    
    *(arg2 + 8) &= 0xfffffff7
    *(arg2 + 0x10) = 0
    *(arg2 + 0x14) = 0

if (((*(arg2 + 0xe8)).b & arg4.b & 0x40) != 0)
    int32_t eax_48 = *(arg2 + 0x108)
    
    if (eax_48 != 0)
        int32_t i_3 = 0
        
        if (*(arg2 + 4) u> 0)
            do
                int32_t eax_49 = *(eax_48 + (i_3 << 2))
                
                if (eax_49 != 0)
                    int32_t ecx_25 = *(arg3 + 0x278)
                    
                    if (ecx_25 == 0)
                        _free(eax_49)
                    else
                        ecx_25(arg3, eax_49)
                
                eax_48 = *(arg2 + 0x108)
                *(eax_48 + (i_3 << 2)) = 0
                i_3 += 1
            while (i_3 u< *(arg2 + 4))
        
        int32_t eax_50 = *(arg2 + 0x108)
        
        if (eax_50 != 0)
            int32_t ecx_26 = *(arg3 + 0x278)
            
            if (ecx_26 == 0)
                _free(eax_50)
            else
                ecx_26(arg3, eax_50)
        
        *(arg2 + 0x108) = 0
    
    *(arg2 + 8) &= 0xffff7fff

int32_t eax_52 = arg4 & 0xffffbddf

if (arg5 == 0xffffffff)
    eax_52 = arg4

*(arg2 + 0xe8) &= not.d(eax_52)
