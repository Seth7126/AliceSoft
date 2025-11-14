// 函数: sub_10013dcb
// 地址: 0x10013dcb
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

uint32_t ecx = zx.d(arg1[5])
int32_t ecx_1 = ecx & 0x8000
int32_t var_24 = *(arg1 + 6)
uint32_t eax_1 = zx.d(*arg1)
int32_t ebx_2 = (ecx & 0x7fff) - 0x3fff
int32_t edi
int32_t var_38 = edi
int32_t var_20 = *(arg1 + 2)
uint32_t var_1c = eax_1 << 0x10
int32_t result
int32_t ebx_3

if (ebx_2 != 0xffffc001)
    arg1 = nullptr
    int32_t var_30_1 = var_24
    void var_2c
    void* edi_4 = &var_2c
    int32_t* esi_1 = &var_20
    *edi_4 = *esi_1
    *(edi_4 + 4) = esi_1[1]
    int32_t esi_5 = data_10021138 - 1
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(esi_5 + 1)
    int32_t eax_7 = (eax_5 + (edx_1 & 0x1f)) s>> 5
    int32_t edx_4 = (esi_5 + 1) & 0x8000001f
    int32_t var_14_1 = ebx_2
    
    if (edx_4 s< 0)
        edx_4 = ((edx_4 - 1) | 0xffffffe0) + 1
    
    int32_t __saved_ebp
    
    if (((&__saved_ebp)[eax_7 - 8] & 1 << (0x1f - edx_4.b)) != 0)
        int32_t eax_9 = eax_7
        bool cond:1_1 = ((&var_24)[eax_9] & not.d(0xffffffff << (0x1f - edx_4.b))) != 0
        
        while (true)
            if (cond:1_1)
                int32_t eax_11
                int32_t edx_9
                edx_9:eax_11 = sx.q(esi_5)
                int32_t eax_13 = (eax_11 + (edx_9 & 0x1f)) s>> 5
                int32_t esi_6 = esi_5 & 0x8000001f
                
                if (esi_6 s< 0)
                    esi_6 = ((esi_6 - 1) | 0xffffffe0) + 1
                
                int16_t* var_8_1 = nullptr
                int32_t edx_11 = 1 << (0x1f - esi_6.b)
                int16_t** ecx_7 = &(&__saved_ebp)[eax_13 - 8]
                arg1 = *ecx_7 + edx_11
                bool cond:4_1
                
                if (arg1 u>= *ecx_7)
                    cond:4_1 = arg1 u>= edx_11
                    goto label_10013efe
                
            label_10013f00:
                var_8_1 = 1
                
                while (true)
                    int32_t temp1_1 = eax_13
                    eax_13 -= 1
                    *ecx_7 = arg1
                    
                    if (temp1_1 - 1 s< 0 || var_8_1 == 0)
                        arg1 = var_8_1
                        break
                    
                    var_8_1 = nullptr
                    ecx_7 = &(&__saved_ebp)[eax_13 - 8]
                    int16_t* edx_12 = *ecx_7
                    arg1 = edx_12 + 1
                    
                    if (edx_12 + 1 u< edx_12)
                        goto label_10013f00
                    
                    cond:4_1 = edx_12 + 1 u>= 1
                label_10013efe:
                    
                    if (not(cond:4_1))
                        goto label_10013f00
                    
                    continue
                
                break
            
            eax_9 += 1
            
            if (eax_9 s>= 3)
                break
            
            cond:1_1 = (&var_24)[eax_9] != 0
    
    (&__saved_ebp)[eax_7 - 8] &= 0xffffffff << (0x1f - edx_4.b)
    
    if (eax_7 + 1 s< 3)
        __builtin_memset(&(&__saved_ebp)[eax_7 - 7], 0, (3 - (eax_7 + 1)) << 2)
    
    if (arg1 != 0)
        ebx_2 += 1
    
    int32_t eax_17 = data_10021134
    
    if (ebx_2 s< eax_17 - data_10021138)
        var_24 = 0
        int32_t* edi_9 = &var_20
        *edi_9 = 0
        edi_9[1] = 0
        ebx_3 = 0
        result = 2
    else if (ebx_2 s> eax_17)
        int32_t ecx_36 = data_1002113c
        
        if (ebx_2 s< data_10021130)
            int32_t eax_42 = data_10021144
            var_24 &= 0x7fffffff
            ebx_3 = ebx_2 + eax_42
            int32_t eax_44
            int32_t edx_45
            edx_45:eax_44 = sx.q(ecx_36)
            int32_t eax_46 = (eax_44 + (edx_45 & 0x1f)) s>> 5
            int32_t edx_48 = ecx_36 & 0x8000001f
            
            if (edx_48 s< 0)
                edx_48 = ((edx_48 - 1) | 0xffffffe0) + 1
            
            int32_t var_10_6 = 0
            arg1 = nullptr
            char var_8_5 = 0x20 - edx_48.b
            
            do
                int32_t edi_25 = (&var_24)[arg1]
                (&var_24)[arg1] = edi_25 u>> edx_48.b | var_10_6
                arg1 += 1
                var_10_6 = (edi_25 & not.d(0xffffffff << edx_48.b)) << var_8_5
            while (arg1 s< 3)
            
            int32_t i = 2
            void* ecx_51 = &var_1c - (eax_46 << 2)
            
            do
                if (i s< eax_46)
                    (&var_24)[i] = 0
                else
                    (&var_24)[i] = *ecx_51
                
                i -= 1
                ecx_51 -= 4
            while (i s>= 0)
            
            result = 0
        else
            var_24 = 0
            int32_t* edi_21 = &var_20
            *edi_21 = 0
            edi_21[1] = 0
            var_24 |= 0x80000000
            int32_t eax_38
            int32_t edx_39
            edx_39:eax_38 = sx.q(ecx_36)
            int32_t eax_40 = (eax_38 + (edx_39 & 0x1f)) s>> 5
            int32_t edx_42 = ecx_36 & 0x8000001f
            
            if (edx_42 s< 0)
                edx_42 = ((edx_42 - 1) | 0xffffffe0) + 1
            
            int32_t var_10_5 = 0
            arg1 = nullptr
            char var_8_4 = 0x20 - edx_42.b
            
            do
                int32_t esi_39 = (&__saved_ebp)[&arg1[-4]]
                (&__saved_ebp)[&arg1[-4]] = esi_39 u>> edx_42.b | var_10_5
                arg1 += 1
                var_10_5 = (esi_39 & not.d(0xffffffff << edx_42.b)) << var_8_4
            while (arg1 s< 3)
            
            int32_t i_1 = 2
            void* ecx_42 = &var_1c - (eax_40 << 2)
            
            do
                if (i_1 s< eax_40)
                    (&var_24)[i_1] = 0
                else
                    (&var_24)[i_1] = *ecx_42
                
                i_1 -= 1
                ecx_42 -= 4
            while (i_1 s>= 0)
            
            ebx_3 = data_10021144 + data_10021130
            result = 1
    else
        int32_t eax_18 = eax_17 - var_14_1
        var_24 = var_30_1
        int32_t* edi_12 = &var_20
        void* esi_13 = &var_2c
        int32_t eax_19
        int32_t edx_14
        edx_14:eax_19 = sx.q(eax_18)
        *edi_12 = *esi_13
        int32_t eax_21 = (eax_19 + (edx_14 & 0x1f)) s>> 5
        int32_t edx_17 = eax_18 & 0x8000001f
        edi_12[1] = *(esi_13 + 4)
        
        if (edx_17 s< 0)
            edx_17 = ((edx_17 - 1) | 0xffffffe0) + 1
        
        int32_t var_10_2 = 0
        arg1 = nullptr
        char var_8_2 = 0x20 - edx_17.b
        
        do
            int32_t esi_16 = (&__saved_ebp)[&arg1[-4]]
            (&__saved_ebp)[&arg1[-4]] = esi_16 u>> edx_17.b | var_10_2
            arg1 += 1
            var_10_2 = (esi_16 & not.d(0xffffffff << edx_17.b)) << var_8_2
        while (arg1 s< 3)
        
        int32_t i_2 = 2
        void* ecx_19 = &var_1c - (eax_21 << 2)
        
        do
            if (i_2 s< eax_21)
                (&var_24)[i_2] = 0
            else
                (&var_24)[i_2] = *ecx_19
            
            i_2 -= 1
            ecx_19 -= 4
        while (i_2 s>= 0)
        
        int32_t esi_25 = data_10021138 - 1
        int32_t eax_23
        int32_t edx_20
        edx_20:eax_23 = sx.q(esi_25 + 1)
        int32_t eax_25 = (eax_23 + (edx_20 & 0x1f)) s>> 5
        int32_t edx_23 = (esi_25 + 1) & 0x8000001f
        int32_t var_10_3 = eax_25
        
        if (edx_23 s< 0)
            edx_23 = ((edx_23 - 1) | 0xffffffe0) + 1
        
        void* ebx_6 = &(&__saved_ebp)[eax_25 - 8]
        
        if ((*ebx_6 & 1 << (0x1f - edx_23.b)) != 0)
            bool cond:10_1 = ((&var_24)[eax_25] & not.d(0xffffffff << (0x1f - edx_23.b))) != 0
            
            while (true)
                if (cond:10_1)
                    int32_t eax_27
                    int32_t edx_29
                    edx_29:eax_27 = sx.q(esi_25)
                    int32_t eax_29 = (eax_27 + (edx_29 & 0x1f)) s>> 5
                    int32_t esi_26 = esi_25 & 0x8000001f
                    
                    if (esi_26 s< 0)
                        esi_26 = ((esi_26 - 1) | 0xffffffe0) + 1
                    
                    arg1 = nullptr
                    int32_t edx_31 = 1 << (0x1f - esi_26.b)
                    int32_t esi_29 = (&__saved_ebp)[eax_29 - 8]
                    int32_t edi_16 = esi_29 + edx_31
                    
                    if (edi_16 u< esi_29 || edi_16 u< edx_31)
                        arg1 = 1
                    
                    (&__saved_ebp)[eax_29 - 8] = edi_16
                    int16_t* ecx_24 = arg1
                    
                    while (true)
                        int32_t temp2_1 = eax_29
                        eax_29 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                        
                        if (ecx_24 == 0)
                            break
                        
                        int32_t edx_32 = (&__saved_ebp)[eax_29 - 8]
                        int16_t* edi_17 = nullptr
                        
                        if (edx_32 + 1 u< edx_32 || edx_32 + 1 u< 1)
                            edi_17 = 1
                        
                        (&__saved_ebp)[eax_29 - 8] = edx_32 + 1
                        ecx_24 = edi_17
                    
                    break
                
                eax_25 += 1
                
                if (eax_25 s>= 3)
                    break
                
                cond:10_1 = (&var_24)[eax_25] != 0
        
        *ebx_6 &= 0xffffffff << (0x1f - edx_23.b)
        
        if (var_10_3 + 1 s< 3)
            __builtin_memset(&(&__saved_ebp)[var_10_3 - 7], 0, (3 - (var_10_3 + 1)) << 2)
        
        int32_t ecx_29 = data_1002113c + 1
        int32_t eax_34
        int32_t edx_33
        edx_33:eax_34 = sx.q(ecx_29)
        int32_t eax_36 = (eax_34 + (edx_33 & 0x1f)) s>> 5
        int32_t edx_36 = ecx_29 & 0x8000001f
        
        if (edx_36 s< 0)
            edx_36 = ((edx_36 - 1) | 0xffffffe0) + 1
        
        int32_t var_10_4 = 0
        arg1 = nullptr
        char var_8_3 = 0x20 - edx_36.b
        
        do
            int32_t esi_31 = (&__saved_ebp)[&arg1[-4]]
            (&__saved_ebp)[&arg1[-4]] = esi_31 u>> edx_36.b | var_10_4
            arg1 += 1
            var_10_4 = (esi_31 & not.d(0xffffffff << edx_36.b)) << var_8_3
        while (arg1 s< 3)
        
        int32_t i_3 = 2
        void* ecx_35 = &var_1c - (eax_36 << 2)
        
        do
            if (i_3 s< eax_36)
                (&var_24)[i_3] = 0
            else
                (&var_24)[i_3] = *ecx_35
            
            i_3 -= 1
            ecx_35 -= 4
        while (i_3 s>= 0)
        
        ebx_3 = 0
        result = 2
else
    ebx_3 = 0
    int32_t eax_3 = 0
    
    while (true)
        if ((&var_24)[eax_3] != 0)
            var_24 = 0
            int32_t* edi_1 = &var_20
            *edi_1 = 0
            edi_1[1] = 0
            result = 2
            break
        
        eax_3 += 1
        
        if (eax_3 s>= 3)
            result = 0
            break

int32_t ecx_54 = neg.d(ecx_1)
int32_t ecx_57 = data_10021140
int32_t ebx_13 =
    ebx_3 << (0x1f - (data_1002113c).b) | (sbb.d(ecx_54, ecx_54, ecx_1 != 0) & 0x80000000) | var_24

if (ecx_57 == 0x40)
    int32_t edx_51 = var_20
    arg2[1] = ebx_13
    *arg2 = edx_51
else if (ecx_57 == 0x20)
    *arg2 = ebx_13

return result
