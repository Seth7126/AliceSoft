// 函数: sub_5bda90
// 地址: 0x5bda90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c97d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
struct sys43vm::CMemoryFile::VTable* const var_40 = &sys43vm::CMemoryFile::`vftable'
struct memory::CFastMemory::VTable* const var_3c = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_4 = 0

if (sub_5d1070(&var_40, ebx) == 0)
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    void** var_74_1 = ebx
    sub_64b530(0x6e6018)
    ebx.b = 0
else if (var_34 u< 0x10)
label_5be033:
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    void** var_74_32 = ebx
    sub_64b530(0x6e60a8)
    ebx.b = 0
else
    if (sub_5bf2f0(&var_40) == 0)
        goto label_5be033
    
    int32_t ebp_1 = 0
    int32_t var_4c = 0
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    var_4.b = 1
    
    if (var_34 u< 0x10)
    label_5be00c:
        
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        void** var_74_30 = ebx
        sub_64b530(0x6e6048)
        ebx.b = 0
    else
        char eax_7 = sub_5bf400(&var_40, &var_4c)
        ebp_1 = var_4c
        
        if (eax_7 == 0)
            goto label_5be00c
        
        struct sys43vm::CMemoryImageAnalyser::VTable* const var_58 =
            &sys43vm::CMemoryImageAnalyser::`vftable'
        var_4.b = 2
        arg1[0x3c] = 0
        
        if (ebp_1 u>= var_48_1)
        label_5bdf11:
            ebx = nullptr
            int32_t eax_41
            int32_t edx_1
            edx_1:eax_41 = muls.dp.d(0x2aaaaaab, arg1[0x2e] - arg1[0x2d])
            int32_t edx_2 = edx_1 s>> 2
            
            if ((edx_2 u>> 0x1f) + edx_2 s<= 0)
            label_5bdf62:
                
                if (sub_5bf560(arg1) == 0)
                    ebx.b = 0
                else
                    sub_5bef10(arg1)
                    sub_5dd710(&arg1[0x43], &arg1[0x15])
                    ebx.b = 1
            else
                int32_t edi_3 = 0
                
                while (true)
                    if (sub_5dba10(arg1[0x2d] + edi_3, arg1) == 0)
                        ebx.b = sub_64b530("switch")
                        break
                    
                    ebx += 1
                    int32_t eax_46
                    int32_t edx_3
                    edx_3:eax_46 = muls.dp.d(0x2aaaaaab, arg1[0x2e] - arg1[0x2d])
                    edi_3 += 0x18
                    int32_t edx_4 = edx_3 s>> 2
                    
                    if (ebx s>= (edx_4 u>> 0x1f) + edx_4)
                        goto label_5bdf62
        else
            while (true)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_4.b = 3
                
                if (sub_5d14f0(&var_58, &var_2c, 4) == 0)
                    if (ebx[5] u>= 0x10)
                        ebx = *ebx
                    
                    void** var_74_28 = ebx
                    ebx.b = sub_64b530(0x6e6074)
                else
                    char* ecx_4 = &var_2c
                    int32_t eax_12 = 4
                    
                    if (var_18_1 u>= 0x10)
                        ecx_4 = var_2c.d
                    
                    if (var_1c_1 u< 4)
                        eax_12 = var_1c_1
                    
                    int32_t eax_13 = sub_405190(eax_12, "CODE", ecx_4, eax_12)
                    bool cond:1_1 = eax_13 == 0
                    
                    if (eax_13 == 0)
                        if (var_1c_1 u>= 4)
                            eax_13.b = var_1c_1 != 4
                        else
                            eax_13 = 0xffffffff
                        
                        cond:1_1 = eax_13 == 0
                    
                    eax_13.b = cond:1_1
                    char eax_14
                    
                    if (eax_13.b == 0)
                        if (sub_40c250(&var_2c, "MSG1") != 0)
                            eax_14 = sub_5be110(arg1, &var_58)
                            goto label_5bded2
                        
                        if (sub_40c250(&var_2c, "FUNC") != 0)
                            eax_14 = sub_5be2c0(arg1, &var_58)
                            goto label_5bded2
                        
                        if (sub_40c250(&var_2c, "STRT") == 0)
                            if (sub_40c250(&var_2c, "MAIN") != 0)
                                eax_14 = sub_468b20(&var_58, &arg1[0x3d])
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "MSGF") != 0)
                                eax_14 = sub_468b20(&var_58, &arg1[0x3e])
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "GLOB") != 0)
                                eax_14 = sub_5be5c0(arg1, &var_58)
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "GSET") != 0)
                                eax_14 = sub_5be620(arg1, &var_58)
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "HLL0") != 0)
                                eax_14 = sub_5be6d0(arg1, &var_58)
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "SWI0") != 0)
                                eax_14 = sub_5be960(arg1, &var_58)
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "STR0") != 0)
                                eax_14 = sub_5beb30(arg1, &var_58)
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "FNAM") != 0)
                                eax_14 = sub_5bec70(arg1, &var_58)
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "OJMP") != 0)
                                eax_14 = sub_468b20(&var_58, &arg1[0x3f])
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "GVER") != 0)
                                eax_14 = sub_468b20(&var_58, &arg1[0x40])
                                goto label_5bded2
                            
                            if (sub_40c250(&var_2c, "VERS") == 0)
                                if (sub_40c250(&var_2c, "FNCT") != 0)
                                    eax_14 = sub_5be400(&arg1[0x18], &var_58)
                                    goto label_5bded2
                                
                                if (sub_40c250(&var_2c, "DELG") != 0)
                                    eax_14 = sub_5be400(&arg1[0x1b], &var_58)
                                    goto label_5bded2
                                
                                if (sub_40c250(&var_2c, "KEYC") != 0)
                                    eax_14 = sub_5bedb0(arg1, &var_58)
                                    goto label_5bded2
                                
                                if (sub_40c250(&var_2c, "OBJG") != 0)
                                    eax_14 = sub_5bee00(arg1, &var_58)
                                    goto label_5bded2
                                
                                char* eax_52 = &var_2c
                                
                                if (var_18_1 u>= 0x10)
                                    eax_52 = var_2c.d
                                
                                if (ebx[5] u>= 0x10)
                                    ebx = *ebx
                                
                                char* var_74_27 = eax_52
                                void** var_78_5 = ebx
                                sub_64b530(0x6e6118)
                                ebx.b = 0
                            else if (sub_468b20(&var_58, &arg1[0x3c]) == 0)
                                ebx.b = 0
                            else
                                if (arg1[0x3c] == 6)
                                    goto label_5bdeda
                                
                                int32_t var_74_19 = arg1[0x3c]
                                sub_64b530(0x6e5fd0)
                                ebx.b = 0
                        else
                            sub_5be490(arg1, &var_58)
                        label_5bdeda:
                            var_4.b = 2
                            
                            if (var_18_1 u>= 0x10)
                                j__free(var_2c.d)
                            
                            if (ebp_1 u>= var_48_1)
                                goto label_5bdf11
                            
                            continue
                    else
                        eax_14 = sub_5be090(arg1, &var_58)
                    label_5bded2:
                        
                        if (eax_14 != 0)
                            goto label_5bdeda
                        
                        ebx.b = 0
                
                if (var_18_1 u>= 0x10)
                    j__free(var_2c.d)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                break
    
    if (ebp_1 != 0)
        j__free(ebp_1)

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
