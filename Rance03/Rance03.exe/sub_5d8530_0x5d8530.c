// 函数: sub_5d8530
// 地址: 0x5d8530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca62a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x10e8)
int32_t eax_2 = __security_cookie ^ &ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
int32_t arg_10dc
fsbase->NtTib.ExceptionList = &arg_10dc
void** eax_6 = ecx + 0x14
*(ecx + 0x10) = 0
bool cond:0 = eax_6[5] u< 0x10
eax_6[4] = 0

if (not(cond:0))
    eax_6 = *eax_6

*eax_6 = nullptr
sub_4107c0(*(ecx + 4), *(ecx + 8))
*(ecx + 8) = *(ecx + 4)
struct sys43vm::CReadFile::VTable* const arg_4 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const arg_8 = &memory::CFastMemory::`vftable'
int32_t lpMem = 0
int32_t arg_10 = 0
int32_t arg_14 = 0
int32_t arg_18 = 0
int32_t arg_10e4 = 0
void* ebx

if (sub_5daca0(arg5, arg1, arg2, &arg_4, 1) != 0)
    int32_t arg_80 = 0xf
    int32_t arg_7c = 0
    char arg_6c = 0
    arg_10e4.b = 1
    
    if (sub_5d7a10(&arg_4, &arg_6c) == 0)
        ebx.b = 0
    else
        int32_t arg_1c
        
        if (sub_40c250(&arg_6c, 0x6ea94c) == 0)
            ebx.b = 0
        else if (sub_5d7960(&arg_4, &arg_1c) == 0)
            ebx.b = 0
        else
            int32_t ebp_1 = arg_1c
            
            if (ebp_1 u> 9)
                ebx.b = 0
            else
                int32_t arg_b0 = 0xf
                int32_t arg_ac = 0
                char arg_9c = 0
                arg_10e4.b = 2
                
                if (sub_5d7a10(&arg_4, &arg_9c) == 0)
                    ebx.b = 0
                    sub_401fb0(&arg_9c)
                else if (sub_40d280(&arg_9c, arg4) != 0)
                    ebx.b = 0
                    sub_401fb0(&arg_9c)
                else
                    char arg_54
                    int32_t arg_64
                    int32_t arg_68
                    
                    if (ebp_1 s< 7)
                    label_5d875f:
                        int32_t (** var_24_6)(void* arg1) = &var_8
                        
                        if (ebp_1 s< 4)
                            if (sub_5d7960(&arg_4, var_24_6) == 0)
                                ebx.b = 0
                                sub_401fb0(&arg_9c)
                            else
                                ebx = arg3
                            label_5d87c7:
                                int32_t arg_24
                                
                                if (sub_5d7960(&arg_4, &arg_24) == 0)
                                    ebx.b = 0
                                    sub_401fb0(&arg_9c)
                                else
                                    struct memory::CFastIntVector::VTable* arg_44 =
                                        &memory::CFastIntVector::`vftable'
                                    int32_t arg_48 = 0
                                    int32_t arg_4c = 0
                                    int32_t arg_50 = 0
                                    arg_10e4.b = 4
                                    
                                    if (sub_5da920(&arg_4, &arg_44) != 0)
                                        struct sys43vm::CIntStack::VTable* const arg_b4
                                        sub_5bcf10(&arg_b4)
                                        arg_10e4.b = 5
                                        char eax_17
                                        
                                        if (ebp_1 s<= 3)
                                            eax_17 = sub_5bd020(&arg_b4, &arg_4)
                                        
                                        if (ebp_1 s> 3 || eax_17 != 0)
                                            struct sys43vm::CIntStack::VTable* arg_ccc
                                            sub_5bcf10(&arg_ccc)
                                            struct sys43vm::CIntStack::VTable* arg_4bc
                                            sub_5bcf10(&arg_4bc)
                                            struct sys43vm::CIntStack::VTable* arg_8c4
                                            sub_5bcf10(&arg_8c4)
                                            arg_10e4.b = 8
                                            
                                            if (sub_5bd020(&arg_ccc, &arg_4) == 0)
                                            labelid_e:
                                                ebx.b = 0
                                            else if (sub_5bd020(&arg_8c4, &arg_4) == 0)
                                            labelid_e:
                                                ebx.b = 0
                                            else if (sub_5bd020(&arg_4bc, &arg_4) == 0)
                                            labelid_e:
                                                ebx.b = 0
                                            else
                                                char eax_21
                                                
                                                if (ebp_1 s>= 4)
                                                    eax_21 = sub_5d9730(&arg_4, ebx, &arg_b4)
                                                
                                                if (ebp_1 s>= 4 && eax_21 == 0)
                                                labelid_e:
                                                    ebx.b = 0
                                                else
                                                    *(ebx + 0x208) = *(ebx + 0x20c) + var_8
                                                    sub_5de050(ebx + 0x220, &arg_44)
                                                    sub_5bcf70(ebx + 0x238, &arg_b4)
                                                    sub_5bcf70(ebx + 0x640, &arg_ccc)
                                                    sub_5bcf70(ebx + 0xa48, &arg_8c4)
                                                    sub_5bcf70(ebx + 0xe50, &arg_4bc)
                                                    ebx += 0x16c
                                                    int32_t arg_20
                                                    
                                                    if (sub_5d7960(&arg_4, ebx + 0x14) == 0)
                                                    labelid_e:
                                                        ebx.b = 0
                                                    else if (sub_5d7960(&arg_4, &arg_20) == 0)
                                                    labelid_e:
                                                        ebx.b = 0
                                                    else if (sub_5d7960(&arg_4, &__return_addr)
                                                        == 0)
                                                    labelid_e:
                                                        ebx.b = 0
                                                    else
                                                        void* const __return_addr_2 = __return_addr
                                                        int32_t esi_3 = 0
                                                        
                                                        if (__return_addr_2 s> 0)
                                                            do
                                                                if (sub_5d7960(&arg_4, &arg_20) == 0)
                                                                    goto label_5d92d9_2
                                                                
                                                                if (sub_5d7960(&arg_4, &arg_24) == 0)
                                                                    goto label_5d92d9_2
                                                                
                                                                esi_3 += 1
                                                            while (esi_3 s< __return_addr_2)
                                                        
                                                        if (ebp_1 s< 9)
                                                            *(ebx + 0x18) = 1
                                                        label_5d8a27:
                                                            sub_5d5d40(ebx)
                                                            
                                                            if (sub_5d7960(&arg_4, &arg_1c) == 0)
                                                            labelid_e:
                                                                ebx.b = 0
                                                            else
                                                                int32_t arg_34 = 0
                                                                
                                                                if (arg_1c s> 0)
                                                                    int32_t esi_9
                                                                    
                                                                    do
                                                                        var_8 = nullptr
                                                                        
                                                                        if (sub_5d7960(&arg_4, &var_8) == 0)
                                                                            goto label_5d92d9_2
                                                                        
                                                                        int32_t (* esi_4)(void* arg1) = var_8
                                                                        
                                                                        if (esi_4 != 0xffffffff)
                                                                            void* arg_38
                                                                            
                                                                            if (ebp_1 s< 1)
                                                                                ebx = 1
                                                                                arg_38 = 1
                                                                            else
                                                                                if (sub_5d7960(&arg_4, &arg_38) == 0)
                                                                                    goto label_5d92d9_2
                                                                                
                                                                                ebx = arg_38
                                                                            int32_t edi_3
                                                                            int32_t arg_30
                                                                            
                                                                            if (ebp_1 s< 9)
                                                                                edi_3 = 0
                                                                                arg_30 = 0
                                                                            else
                                                                                if (sub_5d7960(&arg_4, &arg_30) == 0)
                                                                                    goto label_5d92d9_2
                                                                                
                                                                                edi_3 = arg_30
                                                                            
                                                                            if (esi_4 u> 5)
                                                                                goto label_5d92d9_2
                                                                            
                                                                            void* const __return_addr_4
                                                                            void arg_28
                                                                            int32_t* eax_45
                                                                            int32_t (* esi_6)(void* arg1)
                                                                            void* const __return_addr_1
                                                                            void* __return_addr_3
                                                                            int32_t (* edi_9)(void* arg1)
                                                                            
                                                                            switch (esi_4)
                                                                                case nullptr
                                                                                    struct sys43vm::CPage::VTable** 
                                                                                        eax_36 = sub_69adc6(0x64)
                                                                                    struct sys43vm::CPage::VTable** eax_38
                                                                                    
                                                                                    if (eax_36 == 0)
                                                                                        eax_38 = nullptr
                                                                                    else
                                                                                        eax_38 =
                                                                                            sub_5d3190(eax_36, 0, arg3 + 0x16c)
                                                                                    
                                                                                    eax_38[6] = ebx
                                                                                    ebx = arg3 + 0x16c
                                                                                    var_8 = eax_38
                                                                                    eax_38[8] = edi_3
                                                                                    sub_412de0(ebx + 8, &var_8)
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &arg_28) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    esi_6 = var_8
                                                                                    *(esi_6 + 0x24) = *(arg3 + 0x150)
                                                                                    int32_t arg_3c
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &arg_3c) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    int32_t edi_4 = arg_3c
                                                                                    
                                                                                    if (edi_4 s> 0)
                                                                                        sub_64ad90(esi_6 + 0x28, edi_4)
                                                                                        void* edi_5 = edi_4 << 2
                                                                                        
                                                                                        if (edi_5 != 0 && sub_5d7910(&arg_4, 
                                                                                                *(esi_6 + 0x2c), edi_5) == 0)
                                                                                            goto label_5d92d9_2
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &__return_addr)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    __return_addr_3 = __return_addr
                                                                                    *(esi_6 + 0xc) = 0
                                                                                    
                                                                                    if (__return_addr_3 s> 0)
                                                                                        if (sub_5d3620(esi_6, __return_addr_3)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        if (*(esi_6 + 0xc) == 0)
                                                                                            eax_45 = nullptr
                                                                                            __return_addr_4 = __return_addr_3
                                                                                            goto label_5d9278
                                                                                        
                                                                                    label_5d91e8:
                                                                                        eax_45 = *(esi_6 + 8)
                                                                                        __return_addr_4 = __return_addr_3
                                                                                        goto label_5d9278
                                                                                case 1
                                                                                    struct sys43vm::CPage::VTable** 
                                                                                        eax_46 = sub_69adc6(0x64)
                                                                                    struct sys43vm::CPage::VTable** eax_49
                                                                                    
                                                                                    if (eax_46 == 0)
                                                                                        eax_49 = nullptr
                                                                                    else
                                                                                        eax_49 =
                                                                                            sub_5d3190(eax_46, 1, arg3 + 0x16c)
                                                                                    
                                                                                    eax_49[6] = ebx
                                                                                    eax_49[8] = edi_3
                                                                                    var_8 = eax_49
                                                                                    ebx = arg3 + 0x16c
                                                                                    sub_412de0(ebx + 8, &var_8)
                                                                                    
                                                                                    if (ebp_1 s< 5)
                                                                                        esi_6 = var_8
                                                                                        
                                                                                        if (sub_5d7960(&arg_4, esi_6 + 0x24)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        goto label_5d8cf4
                                                                                    
                                                                                    arg_68 = 0xf
                                                                                    arg_64 = 0
                                                                                    arg_54 = 0
                                                                                    arg_10e4.b = 9
                                                                                    
                                                                                    if (sub_5d7a10(&arg_4, &arg_54) == 0)
                                                                                    label_5d92d0:
                                                                                        sub_401fb0(&arg_54)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    esi_6 = var_8
                                                                                    
                                                                                    if (arg_64 != 0)
                                                                                        int32_t eax_51 =
                                                                                            sub_5bf1f0(arg3 + 0x48, &arg_54)
                                                                                        *(esi_6 + 0x24) = eax_51
                                                                                        
                                                                                        if (eax_51 == 0xffffffff)
                                                                                            goto label_5d92d0
                                                                                        
                                                                                        arg_10e4.b = 8
                                                                                        sub_401fb0(&arg_54)
                                                                                        goto label_5d8cf4
                                                                                    
                                                                                    *(esi_6 + 0x24) = 0xffffffff
                                                                                    arg_10e4.b = 8
                                                                                    sub_401fb0(&arg_54)
                                                                                label_5d8cf4:
                                                                                    int32_t arg_40
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &arg_40) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    int32_t edi_7 = arg_40
                                                                                    
                                                                                    if (edi_7 s> 0)
                                                                                        sub_64ad90(esi_6 + 0x28, edi_7)
                                                                                        void* edi_8 = edi_7 << 2
                                                                                        
                                                                                        if (edi_8 != 0 && sub_5d7910(&arg_4, 
                                                                                                *(esi_6 + 0x2c), edi_8) == 0)
                                                                                            goto label_5d92d9_2
                                                                                    
                                                                                    if (ebp_1 s< 8)
                                                                                        *(esi_6 + 0x4c) = 0xffffffff
                                                                                    else if (
                                                                                            sub_5d7960(&arg_4, esi_6 + 0x4c) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &__return_addr)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    __return_addr_3 = __return_addr
                                                                                    *(esi_6 + 0xc) = 0
                                                                                    
                                                                                    if (__return_addr_3 s> 0)
                                                                                        if (sub_5d3620(esi_6, __return_addr_3)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        if (*(esi_6 + 0xc) != 0)
                                                                                            goto label_5d91e8
                                                                                        
                                                                                        eax_45 = nullptr
                                                                                        __return_addr_4 = __return_addr_3
                                                                                        goto label_5d9278
                                                                                case 2
                                                                                    struct sys43vm::CPage::VTable** 
                                                                                        eax_60 = sub_69adc6(0x64)
                                                                                    struct sys43vm::CPage::VTable** eax_63
                                                                                    
                                                                                    if (eax_60 == 0)
                                                                                        eax_63 = nullptr
                                                                                    else
                                                                                        eax_63 =
                                                                                            sub_5d3190(eax_60, 2, arg3 + 0x16c)
                                                                                    
                                                                                    eax_63[6] = ebx
                                                                                    ebx = arg3 + 0x16c
                                                                                    var_8 = eax_63
                                                                                    eax_63[8] = edi_3
                                                                                    sub_412de0(ebx + 8, &var_8)
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &arg_20) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &__return_addr)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    __return_addr_1 = __return_addr
                                                                                    
                                                                                    if (__return_addr_1 s> 0)
                                                                                        edi_9 = var_8
                                                                                        
                                                                                        if (sub_5d3620(edi_9, __return_addr_1)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        if (*(edi_9 + 0xc) != 0)
                                                                                            goto label_5d926f
                                                                                        
                                                                                        eax_45 = nullptr
                                                                                        goto label_5d9272
                                                                                    
                                                                                    *(var_8 + 0xc) = 0
                                                                                case 3
                                                                                    struct sys43vm::CPage::VTable** 
                                                                                        eax_67 = sub_69adc6(0x64)
                                                                                    struct sys43vm::CPage::VTable** eax_70
                                                                                    
                                                                                    if (eax_67 == 0)
                                                                                        eax_70 = nullptr
                                                                                    else
                                                                                        eax_70 =
                                                                                            sub_5d3190(eax_67, 3, arg3 + 0x16c)
                                                                                    
                                                                                    eax_70[6] = ebx
                                                                                    eax_70[8] = edi_3
                                                                                    var_8 = eax_70
                                                                                    ebx = arg3 + 0x16c
                                                                                    sub_412de0(ebx + 8, &var_8)
                                                                                    esi_6 = var_8
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, esi_6 + 0x38)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    var_8 = nullptr
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &var_8) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    *(esi_6 + 0x3c) = var_8
                                                                                    
                                                                                    if (ebp_1 s< 5)
                                                                                        if (sub_5d7960(&arg_4, esi_6 + 0x40)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        goto label_5d8f41
                                                                                    
                                                                                    arg_68 = 0xf
                                                                                    arg_64 = 0
                                                                                    arg_54 = 0
                                                                                    arg_10e4.b = 0xa
                                                                                    
                                                                                    if (sub_5d7a10(&arg_4, &arg_54) == 0)
                                                                                        goto label_5d92d0
                                                                                    
                                                                                    *(esi_6 + 0x40) =
                                                                                        sub_5bd9a0(arg3 + 0x48, &arg_54)
                                                                                    arg_10e4.b = 8
                                                                                    sub_401fb0(&arg_54)
                                                                                label_5d8f41:
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, esi_6 + 0x44)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &arg_20) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    *(esi_6 + 0x48) = arg_20 == 1
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &__return_addr)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    __return_addr_3 = __return_addr
                                                                                    
                                                                                    if (__return_addr_3 s> 0)
                                                                                        if (sub_5d3620(esi_6, __return_addr_3)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        if (*(esi_6 + 0xc) != 0)
                                                                                            goto label_5d91e8
                                                                                        
                                                                                        eax_45 = nullptr
                                                                                        __return_addr_4 = __return_addr_3
                                                                                        goto label_5d9278
                                                                                    
                                                                                    *(esi_6 + 0xc) = 0
                                                                                case 4
                                                                                    struct sys43vm::CPage::VTable** 
                                                                                        eax_84 = sub_69adc6(0x64)
                                                                                    int32_t (* eax_86)(void* arg1)
                                                                                    
                                                                                    if (eax_84 == 0)
                                                                                        eax_86 = nullptr
                                                                                    else
                                                                                        eax_86 =
                                                                                            sub_5d3190(eax_84, 4, arg3 + 0x16c)
                                                                                    
                                                                                    *(eax_86 + 0x18) = ebx
                                                                                    ebx = arg3 + 0x16c
                                                                                    var_8 = eax_86
                                                                                    *(eax_86 + 0x20) = edi_3
                                                                                    sub_412de0(ebx + 8, &var_8)
                                                                                    
                                                                                    if (ebp_1 s< 5)
                                                                                        if (sub_5d7960(&arg_4, &arg_28) == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        if (sub_5d7960(&arg_4, &arg_28) == 0)
                                                                                            goto label_5d92d9_2
                                                                                    else
                                                                                        int32_t arg_98 = 0xf
                                                                                        int32_t arg_94 = 0
                                                                                        char arg_84 = 0
                                                                                        arg_68 = 0xf
                                                                                        arg_64 = 0
                                                                                        arg_54 = 0
                                                                                        arg_10e4.b = 0xc
                                                                                        char eax_87 =
                                                                                            sub_5d7a10(&arg_4, &arg_84)
                                                                                        char eax_88
                                                                                        
                                                                                        if (eax_87 != 0)
                                                                                            eax_88 = sub_5d7a10(&arg_4, &arg_54)
                                                                                        
                                                                                        if (eax_87 == 0 || eax_88 == 0)
                                                                                            sub_401fb0(&arg_54)
                                                                                            sub_401fb0(&arg_84)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        sub_401fb0(&arg_54)
                                                                                        arg_10e4.b = 8
                                                                                        sub_401fb0(&arg_84)
                                                                                    
                                                                                    if (ebp_1 s>= 2
                                                                                            && sub_5d7960(&arg_4, &arg_28) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    if (ebp_1 s< 5)
                                                                                        esi_6 = var_8
                                                                                        
                                                                                        if (sub_5d7960(&arg_4, esi_6 + 0x24)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        goto label_5d916e
                                                                                    
                                                                                    arg_68 = 0xf
                                                                                    arg_64 = 0
                                                                                    arg_54 = 0
                                                                                    arg_10e4.b = 0xd
                                                                                    
                                                                                    if (sub_5d7a10(&arg_4, &arg_54) == 0)
                                                                                        goto label_5d92d0
                                                                                    
                                                                                    esi_6 = var_8
                                                                                    
                                                                                    if (sub_5d9af0(&arg_54, esi_6 + 0x24, 
                                                                                            arg3 + 0x48) == 0)
                                                                                        goto label_5d92d0
                                                                                    
                                                                                    arg_10e4.b = 8
                                                                                    sub_401fb0(&arg_54)
                                                                                label_5d916e:
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &arg_24) == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    int32_t edi_11 = arg_24
                                                                                    
                                                                                    if (edi_11 s> 0)
                                                                                        sub_64ad90(esi_6 + 0x28, edi_11)
                                                                                        void* edi_12 = edi_11 << 2
                                                                                        
                                                                                        if (edi_12 != 0 && sub_5d7910(&arg_4, 
                                                                                                *(esi_6 + 0x2c), edi_12) == 0)
                                                                                            goto label_5d92d9_2
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &__return_addr)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    __return_addr_3 = __return_addr
                                                                                    
                                                                                    if (__return_addr_3 s> 0)
                                                                                        if (sub_5d3620(esi_6, __return_addr_3)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        if (*(esi_6 + 0xc) != 0)
                                                                                            goto label_5d91e8
                                                                                        
                                                                                        eax_45 = nullptr
                                                                                        __return_addr_4 = __return_addr_3
                                                                                        goto label_5d9278
                                                                                    
                                                                                    *(esi_6 + 0xc) = 0
                                                                                case 5
                                                                                    struct sys43vm::CPage::VTable** 
                                                                                        eax_102 = sub_69adc6(0x64)
                                                                                    int32_t (* eax_105)(void* arg1)
                                                                                    
                                                                                    if (eax_102 == 0)
                                                                                        eax_105 = nullptr
                                                                                    else
                                                                                        eax_105 =
                                                                                            sub_5d3190(eax_102, 5, arg3 + 0x16c)
                                                                                    
                                                                                    *(eax_105 + 0x18) = ebx
                                                                                    ebx = arg3 + 0x16c
                                                                                    var_8 = eax_105
                                                                                    *(eax_105 + 0x20) = edi_3
                                                                                    sub_412de0(ebx + 8, &var_8)
                                                                                    
                                                                                    if (sub_5d7960(&arg_4, &__return_addr)
                                                                                            == 0)
                                                                                        goto label_5d92d9_2
                                                                                    
                                                                                    __return_addr_1 = __return_addr
                                                                                    
                                                                                    if (__return_addr_1 s<= 0)
                                                                                        *(var_8 + 0xc) = 0
                                                                                    else
                                                                                        edi_9 = var_8
                                                                                        
                                                                                        if (sub_5d3620(edi_9, __return_addr_1)
                                                                                                == 0)
                                                                                            goto label_5d92d9_2
                                                                                        
                                                                                        if (*(edi_9 + 0xc) != 0)
                                                                                        label_5d926f:
                                                                                            eax_45 = *(edi_9 + 8)
                                                                                            goto label_5d9272
                                                                                        
                                                                                        eax_45 = nullptr
                                                                                    label_5d9272:
                                                                                        __return_addr_4 = __return_addr_1
                                                                                    label_5d9278:
                                                                                        
                                                                                        if (sub_5d7910(&arg_4, eax_45, 
                                                                                                __return_addr_4) == 0)
                                                                                            goto label_5d92d9_2
                                                                        else
                                                                            var_8 = nullptr
                                                                            sub_412de0(ebx + 8, &var_8)
                                                                        
                                                                        esi_9 = arg_34 + 1
                                                                        arg_34 = esi_9
                                                                    while (esi_9 s< arg_1c)
                                                                
                                                                if (ebp_1 s< 6)
                                                                    ebx = arg3
                                                                label_5d9336:
                                                                    
                                                                    if (sub_5c05b0(ebx) == 0)
                                                                    labelid_e:
                                                                        ebx.b = 0
                                                                    else if (sub_5c0610(ebx) == 0)
                                                                    labelid_e:
                                                                        ebx.b = 0
                                                                    else
                                                                        sub_5c0670(ebx)
                                                                        ebx.b = 1
                                                                else if (sub_5d98c0(ecx, &arg_4) == 0)
                                                                label_5d92d9:
                                                                    ebx.b = 0
                                                                else
                                                                    ebx = arg3
                                                                    
                                                                    if (sub_5d9b70(ecx, ebx) != 0)
                                                                        goto label_5d9336
                                                                    
                                                                label_5d92d9_1:
                                                                    ebx.b = 0
                                                        else
                                                            if (sub_5d7960(&arg_4, ebx + 0x18) != 0)
                                                                goto label_5d8a27
                                                            
                                                        label_5d92d9_2:
                                                            ebx.b = 0
                                            
                                            arg_8c4 = &sys43vm::CIntStack::`vftable'
                                            arg_4bc = &sys43vm::CIntStack::`vftable'
                                            arg_ccc = &sys43vm::CIntStack::`vftable'
                                            arg_b4 = &sys43vm::CIntStack::`vftable'
                                            sub_64ad70(&arg_44)
                                            sub_401fb0(&arg_9c)
                                        else
                                            arg_b4 = &sys43vm::CIntStack::`vftable'
                                            ebx.b = 0
                                            sub_64ad70(&arg_44)
                                            sub_401fb0(&arg_9c)
                                    else
                                        ebx.b = 0
                                        sub_64ad70(&arg_44)
                                        sub_401fb0(&arg_9c)
                        else
                            ebx = arg3
                            
                            if (sub_5d95b0(ecx, &arg_4, ebx, var_24_6) != 0)
                                goto label_5d87c7
                            
                            ebx.b = 0
                            sub_401fb0(&arg_9c)
                    else if (sub_5d7960(&arg_4, &arg_1c) == 0)
                        ebx.b = 0
                        sub_401fb0(&arg_9c)
                    else
                        int32_t edi_1 = arg_1c
                        int32_t esi_1 = 0
                        
                        if (edi_1 s<= 0)
                            goto label_5d875f
                        
                        while (true)
                            arg_68 = 0xf
                            arg_64 = 0
                            arg_54 = 0
                            arg_10e4.b = 3
                            char* ecx_9 = &arg_54
                            
                            if (sub_5d7a10(&arg_4, &arg_54) == 0)
                                sub_401fb0(ecx_9)
                                ebx.b = 0
                                sub_401fb0(&arg_9c)
                                break
                            
                            arg_10e4.b = 2
                            sub_401fb0(ecx_9)
                            esi_1 += 1
                            
                            if (esi_1 s>= edi_1)
                                goto label_5d875f
    
    if (arg_80 u>= 0x10)
        j__free(arg_6c.d)
    
    arg_80 = 0xf
    arg_7c = 0
    arg_6c = 0
else
    ebx.b = 0

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

fsbase->NtTib.ExceptionList = arg_10dc
sub_69a5bc(eax_2 ^ &ExceptionList)
return ebx.b
