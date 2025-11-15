// 函数: sub_46a110
// 地址: 0x46a110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_b4 = 0xffffffff
int32_t (* var_b8)(void* arg1) = sub_72cecb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_b0
int32_t eax_2 = __security_cookie ^ &var_b0
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_c0 = arg3
void* ebx = arg4
void* var_c4 = ebx
int32_t var_cc = 0
void* edx = *(ebx + 0x1c)

if (edx == 0)
    void* var_98
    sub_419600(arg2, "*\t", &var_98, arg2)
    int32_t var_b4_1 = 0
    int32_t var_c_1 = 0xf
    int32_t var_10_1 = 0
    char var_20 = 0
    var_b4_1.b = 1
    int32_t esi_1 = 0
    int32_t eax_6 = (*(ebx + 0x24) - *(ebx + 0x20)) s>> 2
    
    if (eax_6 s> 0)
        do
            int32_t ebx_1
            
            if (esi_1 s< 0)
                ebx_1 = 0
            else if ((*(ebx + 0x24) - *(ebx + 0x20)) s>> 2 s> esi_1)
                ebx_1 = *(*(ebx + 0x20) + (esi_1 << 2))
            else
                ebx_1 = 0
            
            int32_t* eax_11 = sub_46a110(ebx_1, eax_2)
            var_b4_1.b = 2
            var_b4_1.b = 3
            char var_80
            char var_68[0x10]
            char* eax_13 = sub_46a560(&var_68, sub_46de30(ebx_1, &var_80))
            var_b4_1.b = 4
            char var_50
            char* eax_14 = sub_407820(eax_13, &var_98, &var_50, eax_13)
            var_b4_1.b = 5
            var_b4_1.b = 6
            char var_38[0x10]
            sub_4055a0(&var_20, sub_4177a0(eax_14, eax_14, &var_38, eax_11), 0, 0xffffffff)
            int32_t var_24
            
            if (var_24 u>= 0x10)
                sub_403160(var_38[0].d, var_24 + 1, 1)
            
            var_24 = 0xf
            int32_t var_28_1 = 0
            var_38[0] = 0
            int32_t var_3c
            
            if (var_3c u>= 0x10)
                sub_403160(var_50.d, var_3c + 1, 1)
            
            var_3c = 0xf
            int32_t var_40_1 = 0
            var_50 = 0
            int32_t var_54
            
            if (var_54 u>= 0x10)
                sub_403160(var_68[0].d, var_54 + 1, 1)
            
            var_54 = 0xf
            int32_t var_58_1 = 0
            var_68[0] = 0
            int32_t var_6c
            
            if (var_6c u>= 0x10)
                sub_403160(var_80.d, var_6c + 1, 1)
            
            var_b4_1.b = 1
            var_6c = 0xf
            int32_t var_70_1 = 0
            var_80 = 0
            int32_t var_9c
            
            if (var_9c u>= 0x10)
                sub_403160(var_b0, var_9c + 1, 1)
            
            ebx = var_c4
            esi_1 += 1
        while (esi_1 s< eax_6)
    
    sub_419600(&var_20, "\r\n", arg3, &var_20)
    
    if (var_c_1 u>= 0x10)
        sub_403160(var_20.d, var_c_1 + 1, 1)
    
    int32_t var_84
    
    if (var_84 u>= 0x10)
        sub_403160(var_98, var_84 + 1, 1)
else
    sub_4698e0(arg3, edx)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_b0)
return arg3
