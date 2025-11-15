// 函数: sub_6231b0
// 地址: 0x6231b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7449aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* ecx = __alloca_probe(0x109c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t entry_ebx
int32_t var_14_1 = entry_ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(ecx + 4) = 0
void* eax_4 = &ecx[8]
bool cond:0 = *(eax_4 + 0x14) u< 0x10
*(eax_4 + 0x10) = 0

if (not(cond:0))
    eax_4 = *eax_4

*eax_4 = 0
struct sys43vm::CReadFile::VTable* const var_1098 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_1094 = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_108c = 0
int32_t var_1088 = 0
int32_t var_1084 = 0
char var_24 = 1
int32_t var_8_1 = 0
struct sys43vm::CReadFile::VTable* const* var_28 = &var_1098
void** hHeap = arg1

if (sub_6246e0(arg4, hHeap, var_28, var_24) == 0)
    entry_ebx.b = 0
else
    var_18 = 0xf
    var_1c = 0
    hHeap.b = 0
    var_8_1.b = 1
    char eax_6 = sub_622cd0(&var_1098, &hHeap)
    char eax_7
    
    if (eax_6 != 0)
        eax_7 = sub_407560(&hHeap, 0x76d6d4)
    
    if (eax_6 == 0 || eax_7 == 0)
        if (var_18 u>= 0x10)
            int32_t var_24_19 = 1
            hHeap = hHeap
            sub_403160(hHeap, var_18 + 1, var_24_19)
        
        var_18 = 0xf
        var_1c = 0
        hHeap.b = 0
        entry_ebx.b = 0
    else
        var_8_1.b = 0
        sub_403320(&hHeap)
        int32_t var_1080
        
        if (sub_622c00(&var_1098, &var_1080) == 0 || var_1080 != 0xe)
            entry_ebx.b = 0
        else
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            char var_44 = 0
            var_8_1.b = 2
            char eax_9 = sub_622cd0(&var_1098, &var_44)
            char eax_10
            
            if (eax_9 != 0)
                eax_10 = sub_4090e0(&var_44, arg3)
            
            char* ecx_12
            
            if (eax_9 == 0 || eax_10 != 0)
                ecx_12 = &var_44
            label_6235db:
                sub_403320(ecx_12)
                entry_ebx.b = 0
            else
                var_8_1.b = eax_10
                sub_403320(&var_44)
                
                if (sub_622c00(&var_1098, &var_1080) == 0)
                    entry_ebx.b = 0
                else
                    entry_ebx = var_1080
                    int32_t esi_2 = 0
                    
                    if (entry_ebx s> 0)
                        do
                            int32_t var_48_1 = 0xf
                            int32_t var_4c_1 = 0
                            char var_5c = 0
                            var_8_1.b = 3
                            ecx_12 = &var_5c
                            
                            if (sub_622cd0(&var_1098, &var_5c) == 0)
                                goto label_6235db
                            
                            var_8_1.b = 0
                            sub_403320(ecx_12)
                            esi_2 += 1
                        while (esi_2 s< entry_ebx)
                    
                    int32_t* var_24_6 = &var_1080
                    hHeap = &var_1098
                    
                    if (sub_6237c0(ecx, hHeap, arg2, var_24_6) == 0)
                        entry_ebx.b = 0
                    else
                        struct memory::CFastIntVector::VTable* var_10a8 =
                            &memory::CFastIntVector::`vftable'
                        char* var_10a4_1 = nullptr
                        int32_t var_10a0_1 = 0
                        int32_t var_109c_1 = 0
                        var_8_1.b = 4
                        
                        if (sub_6240f0(&var_1098, &var_10a8) == 0)
                            sub_405cb0(&var_10a8)
                            entry_ebx.b = 0
                        else
                            struct _EXCEPTION_REGISTRATION_RECORD* var_107c
                            sub_609670(&var_107c)
                            struct sys43vm::CIntStack::VTable* var_c74
                            sub_609670(&var_c74)
                            struct sys43vm::CIntStack::VTable* var_86c
                            sub_609670(&var_86c)
                            struct sys43vm::CIntStack::VTable* var_464
                            sub_609670(&var_464)
                            var_8_1.b = 8
                            
                            if (sub_6097a0(&var_c74, &var_1098) == 0)
                            label_6235a3:
                                var_464 = &sys43vm::CIntStack::`vftable'
                                var_86c = &sys43vm::CIntStack::`vftable'
                                var_c74 = &sys43vm::CIntStack::`vftable'
                                var_107c = &sys43vm::CIntStack::`vftable'
                                sub_405cb0(&var_10a8)
                                entry_ebx.b = 0
                            else
                                if (sub_6097a0(&var_464, &var_1098) == 0)
                                    goto label_6235a3
                                
                                if (sub_6097a0(&var_86c, &var_1098) == 0)
                                    goto label_6235a3
                                
                                struct _EXCEPTION_REGISTRATION_RECORD** var_24_11 = &var_107c
                                hHeap = &var_1098
                                
                                if (sub_623950(hHeap, arg2, var_24_11) == 0)
                                    goto label_6235a3
                                
                                arg2[0x74] = arg2[0x75] + var_1080
                                
                                if (&arg2[0x7d] != &var_10a8)
                                    sub_405cd0(&arg2[0x7d], var_10a0_1)
                                    int32_t eax_21 = arg2[0x7f]
                                    
                                    if (eax_21 != 0)
                                        hHeap = arg2[0x7e]
                                        sub_700660(hHeap, var_10a4_1, eax_21 << 2)
                                
                                sub_6096f0(&arg2[0x81], &var_107c)
                                sub_6096f0(&arg2[0x183], &var_c74)
                                sub_6096f0(&arg2[0x285], &var_464)
                                sub_6096f0(&arg2[0x387], &var_86c)
                                var_464 = &sys43vm::CIntStack::`vftable'
                                var_86c = &sys43vm::CIntStack::`vftable'
                                var_c74 = &sys43vm::CIntStack::`vftable'
                                var_107c = &sys43vm::CIntStack::`vftable'
                                var_8_1.b = 0
                                sub_405cb0(&var_10a8)
                                struct sys43vm::CReadFile::VTable* const* var_24_18 = &var_1098
                                
                                if (sub_620c70(&arg2[0x52]) == 0)
                                    entry_ebx.b = 0
                                else if (sub_610960(arg2) == 0)
                                    entry_ebx.b = 0
                                else if (sub_610a60(arg2) == 0)
                                    entry_ebx.b = 0
                                else
                                    entry_ebx.b = 1

var_1098 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_1094_1 = &memory::CFastMemory::`vftable'

if (lpMem != 0)
    enum HEAP_FLAGS dwFlags = HEAP_NONE
    hHeap = data_7fcbf4
    HeapFree(hHeap, dwFlags, lpMem)

BOOL result
result.b = entry_ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14_1 ^ &__saved_ebp)
return result
