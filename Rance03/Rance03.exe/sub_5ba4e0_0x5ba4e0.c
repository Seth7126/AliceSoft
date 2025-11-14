// 函数: sub_5ba4e0
// 地址: 0x5ba4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c94ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = __security_cookie ^ &var_ac
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = nullptr
struct sys43vm::CWriteFile::VTable* const var_94 = &sys43vm::CWriteFile::`vftable'
uint32_t lpMem = 0
struct sys43vm::CMemoryFile::VTable* const var_90 = &sys43vm::CMemoryFile::`vftable'
void* ebp = nullptr
struct memory::CFastMemory::VTable* const var_8c = &memory::CFastMemory::`vftable'
uint32_t dwBytes_17 = 0
uint32_t lpMem_1 = 0
void* var_84 = nullptr
uint32_t dwBytes_10 = 0
void* var_a4 = nullptr
void* var_7c = nullptr
void** eax_5 = arg3
int32_t var_4 = 0
void* ecx = eax_5[4]

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

if (ecx == 0xffffffff)
    goto label_5ba59c

uint32_t result

if (sub_5de800(&var_94, eax_5, ecx + 1).b == 0)
label_5ba8c1:
    lpMem = lpMem_1
    result.b = 0
else
    esi = var_7c
    ebp = var_84
    lpMem = lpMem_1
    dwBytes_17 = dwBytes_10
    var_a4 = esi
label_5ba59c:
    void* var_5c_1 = esi
    int32_t var_4c
    _memset(&var_4c, 0, 0x38)
    int32_t var_40_1 = arg2
    var_4c = 0x3e8
    int32_t var_38_1 = (*(arg1 + 8) - *(arg1 + 4)) s>> 4
    int32_t var_30_1 = (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 5
    int32_t eax_13
    int32_t edx_2
    edx_2:eax_13 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x20) - *(arg1 + 0x1c))
    int32_t var_48_1 = 7
    int32_t edx_3 = edx_2 s>> 2
    int32_t var_44_1 = 0x38
    int32_t var_28_1 = (edx_3 u>> 0x1f) + edx_3
    int32_t var_20_1 = (*(arg1 + 0x2c) - *(arg1 + 0x28)) s/ 0x1c
    int32_t var_18_1 = (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2
    void* eax_25 = esi + 0x38
    
    if (ebp s< eax_25)
        if (sub_64aeb0(&var_8c, ebp + 0x40038).b == 0)
            goto label_5ba8c1
        
        esi = var_7c
        ebp = var_84
        lpMem = lpMem_1
        dwBytes_17 = dwBytes_10
        var_a4 = esi
    
    uint32_t lpMem_16 = lpMem
    
    if (ebp == 0)
        lpMem_16 = 0
    
    sub_69d850(lpMem_16 + esi, &var_4c, 0x38, eax_4)
    void* eax_29 = arg1 + 0x4c
    void* ecx_10 = var_a4 + 0x38
    void* var_a4_1 = ecx_10
    void* var_7c_1 = ecx_10
    void* edx_7 = *(eax_29 + 0x10)
    
    if (*(eax_29 + 0x14) u>= 0x10)
        eax_29 = *eax_29
    
    if (edx_7 != 0xffffffff)
        if (sub_5de800(&var_94, eax_29, edx_7 + 1).b == 0)
            goto label_5ba8c1
        
        ecx_10 = var_7c_1
        ebp = var_84
        lpMem = lpMem_1
        dwBytes_17 = dwBytes_10
        var_a4_1 = ecx_10
    
    void* eax_30 = arg1
    void* var_58_1 = ecx_10
    int32_t* esi_1 = *(eax_30 + 4)
    
    if (esi_1 != *(eax_30 + 8))
        while (true)
            int32_t i = *esi_1
            int32_t var_c4_4
            
            if (i != 0)
                int32_t edx_9 = *(eax_30 + 0x44)
                result = *(eax_30 + 0x40)
                uint32_t result_1 = result
                
                if (result_1 == edx_9)
                    goto label_5ba8c1
                
                while (*result_1 != i)
                    result_1 += 4
                    
                    if (result_1 == edx_9)
                        break
                
                if (result_1 == edx_9)
                    goto label_5ba8c1
                
                var_c4_4 = (result_1 - result) s>> 2
            else
                var_c4_4 = 0xffffffff
            
            if (sub_5de860(&var_94, var_c4_4).b == 0)
                goto label_5ba8c1
            
            if (sub_5de860(&var_94, (esi_1[2] - esi_1[1]) s>> 2).b == 0)
                goto label_5ba8c1
            
            int32_t* ecx_16 = esi_1[1]
            int32_t eax_34 = esi_1[2]
            
            if (ecx_16 != eax_34)
                void* eax_36 = (eax_34 - ecx_16) & 0xfffffffc
                
                if (eax_36 != 0 && sub_5de800(&var_94, ecx_16, eax_36).b == 0)
                    goto label_5ba8c1
            
            eax_30 = arg1
            esi_1 = &esi_1[4]
            
            if (esi_1 == *(eax_30 + 8))
                ecx_10 = var_7c_1
                ebp = var_84
                lpMem = lpMem_1
                dwBytes_17 = dwBytes_10
                var_a4_1 = ecx_10
                break
    
    int32_t* i_1 = *(eax_30 + 0x10)
    void* var_54_1 = ecx_10
    
    if (i_1 != *(eax_30 + 0x14))
        void* edi = &i_1[7]
        
        do
            int32_t eax_37 = *i_1
            
            if (ebp s< ecx_10 + 4)
                if (sub_64aeb0(&var_8c, ebp + 0x40004).b == 0)
                    goto label_5ba8c1
                
                ecx_10 = var_7c_1
                ebp = var_84
                lpMem = lpMem_1
            
            uint32_t lpMem_17 = lpMem
            
            if (ebp == 0)
                lpMem_17 = 0
            
            *(lpMem_17 + ecx_10) = eax_37
            void* ecx_19 = ecx_10 + 4
            int32_t eax_40 = *(edi - 0x18)
            
            if (ebp s< ecx_19 + 4)
                if (sub_64aeb0(&var_8c, ebp + 0x40004).b == 0)
                    goto label_5ba8c1
                
                ebp = var_84
                lpMem = lpMem_1
            
            uint32_t lpMem_18 = lpMem
            
            if (ebp == 0)
                lpMem_18 = 0
            
            *(lpMem_18 + ecx_19) = eax_40
            ecx_10 = ecx_19 + 4
            void* edx_12 = *(edi - 4)
            var_a4_1 = ecx_10
            var_7c_1 = ecx_10
            void* eax_43
            
            if (*edi u< 0x10)
                eax_43 = edi - 0x14
            else
                eax_43 = *(edi - 0x14)
            
            if (edx_12 != 0xffffffff)
                if (sub_5de800(&var_94, eax_43, edx_12 + 1).b == 0)
                    goto label_5ba8c1
                
                ecx_10 = var_7c_1
                ebp = var_84
                lpMem = lpMem_1
                var_a4_1 = ecx_10
            
            eax_30 = arg1
            i_1 = &i_1[8]
            edi += 0x20
        while (i_1 != *(eax_30 + 0x14))
        
        dwBytes_17 = dwBytes_10
    
    int32_t* esi_2 = *(eax_30 + 0x1c)
    void* var_60_1 = ecx_10
    void* eax_47
    
    if (esi_2 == *(eax_30 + 0x20))
        eax_47 = arg1
    label_5ba977:
        int32_t* edi_1 = *(eax_47 + 0x28)
        void* var_50_1 = ecx_10
        
        if (edi_1 == *(eax_47 + 0x2c))
        label_5bad09:
            int32_t* esi_6 = *(eax_47 + 0x34)
            void* var_68_1 = ecx_10
            
            if (esi_6 == *(eax_47 + 0x38))
            label_5badae:
                void* edx_26 = ecx_10 + 4
                uint32_t dwBytes_8 = dwBytes_10
                int32_t esi_9 = (*(eax_47 + 0x44) - *(eax_47 + 0x40)) s>> 2
                void* var_a0_2 = edx_26
                
                if (ebp s>= edx_26)
                    goto label_5bae1d
                
                ebp += 0x40004
                
                if (ebp u< dwBytes_8)
                    goto label_5bae0f
                
                uint32_t dwBytes_18 = dwBytes_8
                dwBytes_8 += ebp
                uint32_t dwBytes_11 = dwBytes_8
                
                if (dwBytes_18 == neg.d(ebp))
                    goto label_5bae0f
                
                if (lpMem == 0)
                    result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_8)
                else
                    result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_8)
                
                lpMem = result
                uint32_t lpMem_10 = lpMem
                
                if (lpMem == 0)
                labelid_4:
                    result.b = 0
                else
                    ecx_10 = var_a4_1
                    edx_26 = var_a0_2
                label_5bae0f:
                    void* var_84_9 = ebp
                label_5bae1d:
                    uint32_t lpMem_27 = lpMem
                    void* var_7c_3 = edx_26
                    
                    if (ebp == 0)
                        lpMem_27 = 0
                    
                    *(ecx_10 + lpMem_27) = esi_9
                    int32_t* esi_10 = *(arg1 + 0x40)
                    
                    if (esi_10 != *(arg1 + 0x44))
                        while (true)
                            void** eax_69 = *esi_10
                            void** var_98_5 = eax_69
                            void* ecx_30 = eax_69[4]
                            
                            if (eax_69[5] u>= 0x10)
                                eax_69 = *eax_69
                            
                            void* ecx_31 = ecx_30 + 1
                            
                            if (ecx_30 != 0xffffffff)
                                void* eax_70 = edx_26 + ecx_31
                                
                                if (ebp s< eax_70)
                                    ebp = ebp + 0x40000 + ecx_31
                                    
                                    if (ebp u>= dwBytes_8)
                                        uint32_t dwBytes_22 = dwBytes_8
                                        dwBytes_8 += ebp
                                        uint32_t dwBytes_12 = dwBytes_8
                                        
                                        if (dwBytes_22 != neg.d(ebp))
                                            if (lpMem == 0)
                                                result =
                                                    HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_8)
                                            else
                                                result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, 
                                                    dwBytes_8)
                                            
                                            lpMem = result
                                            uint32_t lpMem_11 = lpMem
                                            
                                            if (lpMem == 0)
                                                goto label_5bb1ea_2
                                            
                                            edx_26 = var_a0_2
                                    
                                    void* var_84_10 = ebp
                                
                                uint32_t lpMem_28 = lpMem
                                
                                if (ebp == 0)
                                    lpMem_28 = 0
                                
                                sub_69d850(lpMem_28 + edx_26, eax_69, ecx_31)
                                var_a0_2 = eax_70
                            
                            int32_t eax_73
                            int32_t edx_28
                            edx_28:eax_73 = muls.dp.d(0x66666667, var_98_5[9] - var_98_5[8])
                            void* ecx_34 = var_a0_2
                            int32_t edx_29 = edx_28 s>> 4
                            void* eax_77 = ecx_34 + 4
                            
                            if (ebp s< eax_77)
                                ebp += 0x40004
                                
                                if (ebp u>= dwBytes_8)
                                    uint32_t dwBytes_21 = dwBytes_8
                                    dwBytes_8 += ebp
                                    uint32_t dwBytes_13 = dwBytes_8
                                    
                                    if (dwBytes_21 != neg.d(ebp))
                                        if (lpMem == 0)
                                            result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_8)
                                        else
                                            result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, 
                                                dwBytes_8)
                                        
                                        lpMem = result
                                        uint32_t lpMem_12 = lpMem
                                        
                                        if (lpMem == 0)
                                            goto label_5bb1ea_2
                                        
                                        ecx_34 = var_a0_2
                                
                                void* var_84_11 = ebp
                            
                            uint32_t lpMem_29 = lpMem
                            
                            if (ebp == 0)
                                lpMem_29 = 0
                            
                            *(ecx_34 + lpMem_29) = (edx_29 u>> 0x1f) + edx_29
                            var_a0_2 = eax_77
                            void* var_7c_4 = eax_77
                            int32_t i_2 = 0
                            int32_t eax_80
                            int32_t edx_31
                            edx_31:eax_80 = muls.dp.d(0x66666667, var_98_5[9] - var_98_5[8])
                            int32_t edx_32 = edx_31 s>> 4
                            
                            if ((edx_32 u>> 0x1f) + edx_32 s> 0)
                                int32_t ecx_37 = 0
                                int32_t var_a8_13 = 0
                                int32_t edx_39
                                
                                do
                                    void** edx_35 = var_98_5[8] + ecx_37
                                    void* ecx_38 = var_a0_2
                                    void** var_a4_3 = edx_35
                                    int32_t eax_84 = edx_35[6]
                                    void* eax_85 = ecx_38 + 4
                                    
                                    if (ebp s< eax_85)
                                        ebp += 0x40004
                                        
                                        if (ebp u>= dwBytes_8)
                                            uint32_t dwBytes_23 = dwBytes_8
                                            dwBytes_8 += ebp
                                            uint32_t dwBytes_14 = dwBytes_8
                                            
                                            if (dwBytes_23 != neg.d(ebp))
                                                if (lpMem == 0)
                                                    result =
                                                        HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_8)
                                                else
                                                    result = HeapReAlloc(data_75dc38, HEAP_NONE, 
                                                        lpMem, dwBytes_8)
                                                
                                                lpMem = result
                                                uint32_t lpMem_13 = lpMem
                                                
                                                if (lpMem == 0)
                                                    goto label_5bb1ea_2
                                                
                                                ecx_38 = var_a0_2
                                        
                                        void* var_84_12 = ebp
                                    
                                    uint32_t lpMem_30 = lpMem
                                    
                                    if (ebp == 0)
                                        lpMem_30 = 0
                                    
                                    *(ecx_38 + lpMem_30) = eax_84
                                    void** edx_37 = var_a4_3
                                    var_a0_2 = eax_85
                                    void* var_7c_5 = eax_85
                                    void* ecx_39 = edx_37[4]
                                    
                                    if (edx_37[5] u>= 0x10)
                                        edx_37 = *edx_37
                                        var_a4_3 = edx_37
                                    
                                    void* ecx_40 = ecx_39 + 1
                                    
                                    if (ecx_39 != 0xffffffff)
                                        void* eax_87 = eax_85 + ecx_40
                                        
                                        if (ebp s< eax_87)
                                            ebp = ebp + 0x40000 + ecx_40
                                            
                                            if (ebp u>= dwBytes_8)
                                                uint32_t dwBytes_24 = dwBytes_8
                                                dwBytes_8 += ebp
                                                uint32_t dwBytes_15 = dwBytes_8
                                                
                                                if (dwBytes_24 != neg.d(ebp))
                                                    if (lpMem == 0)
                                                        result = HeapAlloc(data_75dc38, HEAP_NONE, 
                                                            dwBytes_8)
                                                    else
                                                        result = HeapReAlloc(data_75dc38, 
                                                            HEAP_NONE, lpMem, dwBytes_8)
                                                    
                                                    lpMem = result
                                                    uint32_t lpMem_14 = lpMem
                                                    
                                                    if (lpMem == 0)
                                                        goto label_5bb1ea_2
                                                    
                                                    edx_37 = var_a4_3
                                            
                                            void* var_84_13 = ebp
                                        
                                        uint32_t lpMem_31 = lpMem
                                        
                                        if (ebp == 0)
                                            lpMem_31 = 0
                                        
                                        sub_69d850(lpMem_31 + var_a0_2, edx_37, ecx_40)
                                        var_a0_2 = eax_87
                                        void* var_7c_6 = eax_87
                                    
                                    i_2 += 1
                                    var_a8_13 += 0x28
                                    int32_t eax_91
                                    int32_t edx_38
                                    edx_38:eax_91 = muls.dp.d(0x66666667, var_98_5[9] - var_98_5[8])
                                    ecx_37 = var_a8_13
                                    edx_39 = edx_38 s>> 4
                                while (i_2 s< (edx_39 u>> 0x1f) + edx_39)
                            
                            esi_10 = &esi_10[1]
                            
                            if (esi_10 == *(arg1 + 0x44))
                                break
                            
                            edx_26 = var_a0_2
                    
                    void* var_3c_1 = var_58_1
                    void* var_34_1 = var_54_1
                    void* var_2c_1 = var_60_1
                    void* var_24_1 = var_50_1
                    void* var_1c_1 = var_68_1
                    
                    if (ebp s>= eax_25)
                        goto label_5bb1a6
                    
                    ebp += 0x40038
                    
                    if (ebp u< dwBytes_8)
                    label_5bb1a0:
                        void* var_84_14 = ebp
                    label_5bb1a6:
                        uint32_t lpMem_32 = lpMem
                        
                        if (ebp == 0)
                            lpMem_32 = 0
                        
                        sub_69d850(lpMem_32 + var_5c_1, &var_4c, 0x38)
                        uint32_t lpMem_33 = lpMem
                        
                        if (ebp == 0)
                            lpMem_33 = 0
                        
                        if (sub_5d1390(*(arg1 + 0x88), arg4, lpMem_33, var_a0_2).b != 0)
                            result.b = 1
                        else
                        labelid_4:
                            result.b = 0
                    else
                        void* dwBytes_9 = dwBytes_8 + ebp
                        void* dwBytes_16 = dwBytes_9
                        
                        if (dwBytes_8 == neg.d(ebp))
                            goto label_5bb1a0
                        
                        if (lpMem == 0)
                            result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_9)
                        else
                            result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_9)
                        
                        lpMem = result
                        uint32_t lpMem_15 = lpMem
                        
                        if (lpMem != 0)
                            goto label_5bb1a0
                        
                    labelid_4:
                        result.b = 0
            else
                while (true)
                    int32_t edx_25 = *esi_6
                    void* edi_2 = ecx_10 + 4
                    
                    if (ebp s< edi_2)
                        ebp += 0x40004
                        
                        if (ebp u>= dwBytes_10)
                            void* dwBytes_3 = dwBytes_10 + ebp
                            bool cond:12_1 = dwBytes_10 == neg.d(ebp)
                            dwBytes_10 = dwBytes_3
                            
                            if (not(cond:12_1))
                                if (lpMem == 0)
                                    result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_3)
                                else
                                    result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_3)
                                
                                lpMem = result
                                uint32_t lpMem_9 = lpMem
                                
                                if (lpMem == 0)
                                    break
                                
                                ecx_10 = var_a4_1
                        
                        void* var_84_8 = ebp
                    
                    uint32_t lpMem_26 = lpMem
                    
                    if (ebp == 0)
                        lpMem_26 = 0
                    
                    esi_6 = &esi_6[1]
                    *(ecx_10 + lpMem_26) = edx_25
                    ecx_10 = edi_2
                    eax_47 = arg1
                    var_a4_1 = ecx_10
                    
                    if (esi_6 == *(eax_47 + 0x38))
                        goto label_5badae
                
            label_5bb1ea:
                result.b = 0
        else
            while (true)
                int32_t eax_48 = *edi_1
                void* edx_16 = ecx_10 + 4
                void* var_a0_1 = edx_16
                
                if (ebp s< edx_16)
                    ebp += 0x40004
                    
                    if (ebp u>= dwBytes_10)
                        void* dwBytes_4 = dwBytes_10 + ebp
                        bool cond:8_1 = dwBytes_10 == neg.d(ebp)
                        dwBytes_10 = dwBytes_4
                        
                        if (not(cond:8_1))
                            if (lpMem == 0)
                                result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_4)
                            else
                                result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_4)
                            
                            lpMem = result
                            uint32_t lpMem_3 = lpMem
                            
                            if (lpMem == 0)
                                break
                            
                            ecx_10 = var_a4_1
                            edx_16 = var_a0_1
                    
                    void* var_84_2 = ebp
                
                uint32_t lpMem_20 = lpMem
                
                if (ebp == 0)
                    lpMem_20 = 0
                
                *(lpMem_20 + ecx_10) = eax_48
                int32_t* eax_49 = edi_1[1]
                int32_t ecx_22 = edi_1[2]
                uint32_t dwBytes_5 = dwBytes_10
                
                if (eax_49 != ecx_22)
                    void* ecx_24 = (ecx_22 - eax_49) & 0xfffffffc
                    
                    if (ecx_24 != 0)
                        void* eax_50 = ecx_24 + edx_16
                        
                        if (ebp s< eax_50)
                            ebp = ebp + 0x40000 + ecx_24
                            
                            if (ebp u>= dwBytes_5)
                                uint32_t dwBytes_20 = dwBytes_5
                                dwBytes_5 += ebp
                                dwBytes_10 = dwBytes_5
                                
                                if (dwBytes_20 != neg.d(ebp))
                                    if (lpMem == 0)
                                        result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_5)
                                    else
                                        result =
                                            HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_5)
                                    
                                    lpMem = result
                                    uint32_t lpMem_4 = lpMem
                                    
                                    if (lpMem == 0)
                                        break
                                    
                                    edx_16 = var_a0_1
                            
                            void* var_84_3 = ebp
                        
                        uint32_t lpMem_21 = lpMem
                        
                        if (ebp == 0)
                            lpMem_21 = 0
                        
                        sub_69d850(lpMem_21 + edx_16, eax_49, ecx_24)
                        var_a0_1 = eax_50
                
                int32_t eax_53
                int32_t edx_17
                edx_17:eax_53 = muls.dp.d(0x66666667, edi_1[5] - edi_1[4])
                int32_t edx_18 = edx_17 s>> 3
                ecx_10 = var_a0_1 + 4
                var_a4_1 = ecx_10
                
                if (ebp s< ecx_10)
                    ebp += 0x40004
                    
                    if (ebp u>= dwBytes_5)
                        void* dwBytes_6 = dwBytes_5 + ebp
                        dwBytes_10 = dwBytes_6
                        
                        if (dwBytes_5 != neg.d(ebp))
                            if (lpMem == 0)
                                result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_6)
                            else
                                result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_6)
                            
                            lpMem = result
                            uint32_t lpMem_5 = lpMem
                            
                            if (lpMem == 0)
                                break
                            
                            ecx_10 = var_a4_1
                    
                    void* var_84_4 = ebp
                
                int32_t* lpMem_22 = lpMem
                
                if (ebp == 0)
                    lpMem_22 = nullptr
                
                *(lpMem_22 + var_a0_1) = (edx_18 u>> 0x1f) + edx_18
                
                for (int32_t* i_3 = edi_1[4]; i_3 != edi_1[5]; i_3 = &i_3[5])
                    int32_t eax_57 = *i_3
                    void* edx_20 = ecx_10 + 4
                    
                    if (ebp s< edx_20)
                        ebp += 0x40004
                        
                        if (ebp u>= dwBytes_10)
                            void* dwBytes = dwBytes_10 + ebp
                            bool cond:23_1 = dwBytes_10 == neg.d(ebp)
                            dwBytes_10 = dwBytes
                            
                            if (not(cond:23_1))
                                if (lpMem == 0)
                                    result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes)
                                else
                                    result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes)
                                
                                lpMem = result
                                uint32_t lpMem_6 = lpMem
                                
                                if (lpMem == 0)
                                    goto label_5bb1ea_2
                                
                                ecx_10 = var_a4_1
                        
                        void* var_84_5 = ebp
                    
                    uint32_t lpMem_23 = lpMem
                    
                    if (ebp == 0)
                        lpMem_23 = 0
                    
                    *(lpMem_23 + ecx_10) = eax_57
                    void* edx_22 = edx_20
                    int32_t eax_59 = i_3[1]
                    var_a4_1 = edx_22 + 4
                    
                    if (ebp s< edx_22 + 4)
                        ebp += 0x40004
                        
                        if (ebp u>= dwBytes_10)
                            void* dwBytes_1 = dwBytes_10 + ebp
                            bool cond:25_1 = dwBytes_10 == neg.d(ebp)
                            dwBytes_10 = dwBytes_1
                            
                            if (not(cond:25_1))
                                if (lpMem == 0)
                                    result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_1)
                                else
                                    result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_1)
                                
                                lpMem = result
                                uint32_t lpMem_7 = lpMem
                                
                                if (lpMem == 0)
                                    goto label_5bb1ea_2
                                
                                edx_22 = edx_20
                        
                        void* var_84_6 = ebp
                    
                    uint32_t lpMem_24 = lpMem
                    
                    if (ebp == 0)
                        lpMem_24 = 0
                    
                    *(edx_22 + lpMem_24) = eax_59
                    int32_t* eax_61 = i_3[2]
                    int32_t edx_23 = i_3[3]
                    ecx_10 = var_a4_1
                    result = (edx_23 - eax_61) s>> 2
                    
                    if (*i_3 s> result)
                        goto label_5bb1ea_2
                    
                    if (eax_61 != edx_23)
                        uint32_t edx_24 = result << 2
                        
                        if (edx_24 != 0)
                            void* eax_64 = ecx_10 + edx_24
                            
                            if (ebp s< eax_64)
                                ebp = ebp + 0x40000 + edx_24
                                
                                if (ebp u>= dwBytes_10)
                                    void* dwBytes_2 = dwBytes_10 + ebp
                                    bool cond:32_1 = dwBytes_10 == neg.d(ebp)
                                    dwBytes_10 = dwBytes_2
                                    
                                    if (not(cond:32_1))
                                        if (lpMem == 0)
                                            result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_2)
                                        else
                                            result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, 
                                                dwBytes_2)
                                        
                                        lpMem = result
                                        uint32_t lpMem_8 = lpMem
                                        
                                        if (lpMem == 0)
                                            goto label_5bb1ea_2
                                        
                                        ecx_10 = var_a4_1
                                
                                void* var_84_7 = ebp
                            
                            uint32_t lpMem_25 = lpMem
                            
                            if (ebp == 0)
                                lpMem_25 = 0
                            
                            sub_69d850(lpMem_25 + ecx_10, eax_61, edx_24)
                            ecx_10 = eax_64
                            var_a4_1 = ecx_10
                
                eax_47 = arg1
                edi_1 = &edi_1[7]
                
                if (edi_1 == *(eax_47 + 0x2c))
                    goto label_5bad09
            
        label_5bb1ea_1:
            result.b = 0
    else
        uint32_t dwBytes_7 = dwBytes_17
        
        while (true)
            void* edx_14 = esi_2[4]
            int32_t* var_a8_3
            
            if (esi_2[5] u< 0x10)
                var_a8_3 = esi_2
            else
                var_a8_3 = *esi_2
            
            void* edx_15 = edx_14 + 1
            
            if (edx_14 != 0xffffffff)
                void* eax_45 = edx_15 + ecx_10
                
                if (ebp s< eax_45)
                    ebp = ebp + 0x40000 + edx_15
                    
                    if (ebp u>= dwBytes_7)
                        uint32_t dwBytes_19 = dwBytes_7
                        dwBytes_7 += ebp
                        dwBytes_10 = dwBytes_7
                        
                        if (dwBytes_19 != neg.d(ebp))
                            if (lpMem == 0)
                                result = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes_7)
                            else
                                result = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes_7)
                            
                            lpMem = result
                            uint32_t lpMem_2 = lpMem
                            
                            if (lpMem == 0)
                                break
                            
                            ecx_10 = var_a4_1
                    
                    void* var_84_1 = ebp
                
                uint32_t lpMem_19 = lpMem
                
                if (ebp == 0)
                    lpMem_19 = 0
                
                sub_69d850(lpMem_19 + ecx_10, var_a8_3, edx_15)
                ecx_10 = eax_45
                var_a4_1 = ecx_10
            
            eax_47 = arg1
            esi_2 = &esi_2[6]
            
            if (esi_2 == *(eax_47 + 0x20))
                goto label_5ba977
        
    label_5bb1ea_2:
        result.b = 0

char var_71 = result.b

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)
    result.b = var_71

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ac)
return result
