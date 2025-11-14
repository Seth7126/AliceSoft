// 函数: sub_5f32a0
// 地址: 0x5f32a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6cc050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
int32_t* var_2c = arg1
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
void** ebx = *arg1
char var_18 = 1
void** esi = ebx[1]
void** var_28
void* arg_c

if (*(esi + 0xd) == 0)
    void** ecx = arg_c + 4
    var_28 = ecx
    
    do
        ebx = esi
        
        if (sub_5f3ed0(ecx, &esi[5]).b != 0)
            esi = *esi
            eax_3.b = 1
        else if (sub_5f3f70(var_28, &esi[5]).b != 0)
            esi = esi[2]
            eax_3.b = 0
        else
            int32_t edx_1 = esi[0x10]
            void** ebx_2 = arg_c + 0x20
            int32_t* var_1c_1
            
            if (esi[0x11] u< 0x10)
                var_1c_1 = &esi[0xc]
            else
                var_1c_1 = esi[0xc]
            
            int32_t ecx_2 = ebx_2[4]
            int32_t* var_20_1
            
            if (ebx_2[5] u< 0x10)
                var_20_1 = ebx_2
            else
                var_20_1 = *ebx_2
            
            int32_t eax_7 = edx_1
            
            if (ecx_2 u< edx_1)
                eax_7 = ecx_2
            
            eax_3 = sub_405190(eax_7, var_1c_1, var_20_1, eax_7)
            bool cond:2_1 = eax_3 s< 0
            
            if (eax_3 == 0)
                int32_t ecx_4 = ebx_2[4]
                int32_t edx_3 = esi[0x10]
                
                if (ecx_4 u>= edx_3)
                    eax_3.b = ecx_4 != edx_3
                else
                    eax_3 = 0xffffffff
                
                cond:2_1 = eax_3 s< 0
            
            eax_3.b = cond:2_1
            
            if (eax_3.b == 0)
                sub_40d320(ebx_2, &esi[0xc])
                esi = esi[2]
                eax_3.b = 0
            else
                esi = *esi
                eax_3.b = 1
        
        ecx = var_28
        var_18 = eax_3.b
    while (*(esi + 0xd) == 0)
    
    arg1 = var_2c

void** esi_1 = ebx
var_28 = esi_1

if (eax_3.b == 0)
    goto label_5f33f1

char var_4c
int32_t** var_48
void* var_44
void** eax_9

if (ebx != **arg1)
    sub_418580(&var_28)
    esi_1 = var_28
label_5f33f1:
    void* edi_3 = arg_c
    
    if (sub_5f2e40(&esi_1[4], edi_3) == 0)
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    int32_t var_40_6 = arg3
    arg1 = var_2c
    eax_9 = &var_28
    var_44 = edi_3
    var_48 = ebx
    var_4c = var_18
else
    int32_t var_40_4 = arg3
    eax_9 = &arg_c
    var_44 = arg_c
    var_48 = ebx
    var_4c = 1

*arg2 = *sub_5f35d0(arg1, eax_9, var_4c, var_48, var_44)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
