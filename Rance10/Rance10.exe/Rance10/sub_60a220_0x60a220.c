// 函数: sub_60a220
// 地址: 0x60a220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_70 = 0xffffffff
int32_t (* var_74)(void* arg1) = sub_742d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t var_b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg2
void* var_9c = nullptr
int32_t var_98 = 0
int32_t var_94 = 0
int32_t var_70_1 = 0
var_70_1.b = 1
void** var_20
char eax_4 = sub_67edf0(sub_5f20c0(&var_20, edi), &var_9c)
var_70_1.b = 0
int32_t var_c

if (var_c u>= 0x10)
    sub_403160(var_20, var_c + 1, 1)

void* esi = var_9c
void* eax_6

if (eax_4 != 0)
    eax_6 = var_98 - esi

void* ebx
uint32_t var_7c

if (eax_4 == 0 || eax_6 u< 0x10)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_7c = edi
    char* var_c_2 = 0xf
    int32_t var_10_2 = 0
    var_20.b = 0
    sub_403490(&var_20, 0x76b214, 0x2c)
    var_70_1.b = 2
    var_70_1.b = 3
    sub_6c52e0(sub_409240(&var_7c, &var_20, &var_6c, &var_7c))
    int32_t var_58
    
    if (var_58 u>= 0x10)
        sub_403160(var_6c.d, var_58 + 1, 1)
    
    int32_t var_58_2 = 0xf
    int32_t var_5c_1 = 0
    var_6c = 0
    
    if (var_c_2 u>= 0x10)
        sub_403160(var_20, &var_c_2[1], 1)
    
    ebx.b = 0
else
    struct sys43vm::CMemoryImageAnalyser::VTable* const var_60 =
        &sys43vm::CMemoryImageAnalyser::`vftable'
    void* var_5c = esi
    void* var_58_1 = eax_6 + esi
    var_70_1.b = 4
    void var_38
    
    if (sub_60b680(&var_60) != 0)
        char* var_a8 = nullptr
        int32_t var_a4_1 = 0
        int32_t var_a0_1 = 0
        var_70_1.b = 7
        
        if (sub_60b750(&var_60, &var_a8) != 0)
            char* ecx_14 = var_a8
            struct sys43vm::CMemoryImageAnalyser::VTable* const var_90 =
                &sys43vm::CMemoryImageAnalyser::`vftable'
            void* eax_16 = var_a4_1
            char* var_8c_1 = ecx_14
            var_70_1.b = 0xa
            void var_50
            
            if (ecx_14 u>= eax_16)
            label_60a669:
                void* esi_2 = *(arg1 + 0x7c)
                int32_t edi_1 = *(arg1 + 0x80)
                
                if (esi_2 == edi_1)
                label_60a68f:
                    
                    if (sub_60b890(arg1).b != 0)
                        int32_t i = 0
                        int32_t eax_51
                        int32_t edx_8
                        edx_8:eax_51 = muls.dp.d(0x4bda12f7, *(arg1 + 0x38) - *(arg1 + 0x34))
                        int32_t edx_9 = edx_8 s>> 5
                        
                        if (edx_9 u>> 0x1f != neg.d(edx_9))
                            int32_t esi_3 = 0
                            int32_t edx_11
                            
                            do
                                void* eax_55 = *(arg1 + 0x34) + esi_3
                                char* eax_57 = sub_609ec0(arg1, &var_50, eax_55 + 0x1c, eax_55)
                                var_70_1.b = 0x13
                                char* ecx_75 = *(arg1 + 0x34) + 4 + esi_3
                                
                                if (ecx_75 != eax_57)
                                    sub_403590(ecx_75, eax_57, 0, 0xffffffff)
                                
                                var_70_1.b = 0xa
                                sub_403320(&var_50)
                                int32_t var_40_1 = 0xf
                                void** eax_60 = *(arg1 + 0x34) + 4 + esi_3
                                int32_t var_44_1 = 0
                                char var_54 = 0
                                sub_403590(&var_54, eax_60, 0, 0xffffffff)
                                int32_t i_1 = i
                                var_70_1.b = 0x14
                                uint32_t var_bc_23 = var_7c
                                void* var_80
                                sub_60d120(arg1 + 0xb4, &var_80, &var_54)
                                var_70_1.b = 0xa
                                sub_403320(&var_54)
                                i += 1
                                int32_t eax_61
                                int32_t edx_10
                                edx_10:eax_61 =
                                    muls.dp.d(0x4bda12f7, *(arg1 + 0x38) - *(arg1 + 0x34))
                                esi_3 += 0x6c
                                edx_11 = edx_10 s>> 5
                            while (i u< (edx_11 u>> 0x1f) + edx_11)
                        
                        ebx.b = 1
                    else
                        ebx.b = 0
                else
                    while (true)
                        if (sub_625fd0(esi_2, arg1) == 0)
                            sub_403360(&var_38, "switch")
                            var_70_1.b = 0x12
                            ebx.b = sub_6c52e0(&var_38)
                            sub_403320(&var_38)
                            break
                        
                        esi_2 += 0x48
                        
                        if (esi_2 == edi_1)
                            goto label_60a68f
            else
                while (true)
                    int32_t var_c_1 = 0xf
                    int32_t var_10_1 = 0
                    var_20.b = 0
                    var_70_1.b = 0xb
                    
                    if (sub_61ece0(&var_90, &var_20, 4) == 0)
                        if (edi[5] u>= 0x10)
                            edi = *edi
                        
                        var_7c = edi
                        sub_403360(&var_38, 0x76b284)
                        var_70_1.b = 0xc
                        var_70_1.b = 0xd
                        ebx.b = sub_6c52e0(sub_409240(&var_7c, &var_38, &var_50, &var_7c))
                        sub_403320(&var_50)
                        sub_403320(&var_38)
                        sub_403320(&var_20)
                        break
                    
                    char eax_19
                    
                    if (sub_407560(&var_20, "CODE") == 0)
                        if (sub_407560(&var_20, "MSG1") != 0)
                            eax_19 = sub_60a9d0(arg1, &var_90)
                            goto label_60a63a
                        
                        if (sub_407560(&var_20, "FUNC") != 0)
                            eax_19 = sub_60ab80(arg1, &var_90)
                            goto label_60a63a
                        
                        if (sub_407560(&var_20, "STRT") == 0)
                            if (sub_407560(&var_20, "MAIN") != 0)
                                eax_19 = sub_61ec90(&var_90, arg1 + 0xfc)
                                goto label_60a63a
                            
                            if (sub_407560(&var_20, "GLOB") != 0)
                                if (&var_8c_1[4] u> eax_16)
                                    goto label_60a6fb
                                
                                char* ecx_33 = ((zx.d(var_8c_1[3]) << 8 | zx.d(var_8c_1[2])) << 8
                                    | zx.d(var_8c_1[1])) << 8 | zx.d(*var_8c_1)
                                var_8c_1 = &var_8c_1[4]
                                eax_19 = sub_6265e0(arg1 + 0x70, &var_90, ecx_33)
                                goto label_60a63a
                            
                            if (sub_407560(&var_20, "HLL0") != 0)
                                eax_19 = sub_60afd0(arg1, &var_90)
                                goto label_60a63a
                            
                            if (sub_407560(&var_20, "SWI0") != 0)
                                eax_19 = sub_60b200(arg1, &var_90)
                                goto label_60a63a
                            
                            if (sub_407560(&var_20, "STR0") != 0)
                                eax_19 = sub_60b2a0(arg1, &var_90)
                                goto label_60a63a
                            
                            if (sub_407560(&var_20, "GVER") != 0)
                                eax_19 = sub_61ec90(&var_90, arg1 + 0x100)
                                goto label_60a63a
                            
                            char* eax_37
                            
                            if (sub_407560(&var_20, "VERS") == 0)
                                if (sub_407560(&var_20, "DELG") != 0)
                                    eax_19 = sub_60ae30(arg1, &var_90)
                                    goto label_60a63a
                                
                                if (sub_407560(&var_20, "OBJG") != 0)
                                    eax_19 = sub_60b420(arg1, &var_90)
                                    goto label_60a63a
                                
                                if (sub_407560(&var_20, "ENUM") != 0)
                                    eax_19 = sub_60b4a0(arg1, &var_90)
                                    goto label_60a63a
                                
                                if (edi[5] u>= 0x10)
                                    edi = *edi
                                
                                var_7c = edi
                                sub_403360(&var_38, 0x76b150)
                                var_70_1.b = 0x10
                                void** eax_45 = &var_20
                                
                                if (var_c_1 u>= 0x10)
                                    eax_45 = var_20
                                
                                eax_37 = sub_461a30(&var_7c, &var_38, &var_50, &var_7c, eax_45)
                                var_70_1.b = 0x11
                                goto label_60a6e3
                            
                            var_7c = 0
                            
                            if (sub_61ec90(&var_90, &var_7c) == 0)
                                goto label_60a6fb
                            
                            if (var_7c != 0xc)
                                sub_403360(&var_38, 0x76b058)
                                var_70_1.b = 0xe
                                eax_37 = sub_409350(&var_7c, &var_38, &var_50, &var_7c)
                                var_70_1.b = 0xf
                            label_60a6e3:
                                sub_6c52e0(eax_37)
                                sub_403320(&var_50)
                                sub_403320(&var_38)
                            label_60a6fb:
                                ebx.b = 0
                                sub_403320(&var_20)
                                break
                        else
                            sub_60aef0(arg1, &var_90)
                    else
                        eax_19 = sub_60a950(arg1, &var_90)
                    label_60a63a:
                        
                        if (eax_19 == 0)
                            goto label_60a6fb
                    var_70_1.b = 0xa
                    
                    if (var_c_1 u>= 0x10)
                        sub_403160(var_20, var_c_1 + 1, 1)
                    
                    if (var_8c_1 u>= eax_16)
                        goto label_60a669
            esi = var_9c
            var_90 = &sys43vm::CMemoryImageAnalyser::`vftable'
        else
            if (edi[5] u>= 0x10)
                edi = *edi
            
            var_7c = edi
            sub_403360(&var_20, 0x76b1e4)
            var_70_1.b = 8
            var_70_1.b = 9
            sub_6c52e0(sub_409240(&var_7c, &var_20, &var_38, &var_7c))
            sub_403320(&var_38)
            sub_403320(&var_20)
            ebx.b = 0
        
        char* ecx_82 = var_a8
        
        if (ecx_82 != 0)
            sub_403160(ecx_82, var_a0_1 - ecx_82, 1)
    else
        if (edi[5] u>= 0x10)
            edi = *edi
        
        var_7c = edi
        sub_403360(&var_20, 0x76b190)
        var_70_1.b = 5
        var_70_1.b = 6
        sub_6c52e0(sub_409240(&var_7c, &var_20, &var_38, &var_7c))
        sub_403320(&var_38)
        sub_403320(&var_20)
        ebx.b = 0

if (esi != 0)
    sub_403160(esi, var_94 - esi, 1)

char* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_6c)
return result
