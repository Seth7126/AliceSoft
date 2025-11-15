// 函数: sub_630680
// 地址: 0x630680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7455d4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg3
int32_t var_18 = 0
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
int32_t var_8_1 = 0
int32_t var_18_1 = 1
char* ebx = (**arg2)(eax_2)
char* ecx_2 = (**arg2)()

if (ecx_2 != 0)
    char* eax_5
    
    do
        eax_5.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_5.b != 0)
    ecx_2 -= &ecx_2[1]

void* eax_6 = ecx_2 + ebx
void var_48
sub_62d750(&var_48, arg4)
void* ecx_4 = eax_6
int32_t var_8_2 = 1

while (ebx != ecx_4)
    char* esi_1 = sub_62d8f0(&var_48, ecx_4, ebx, &var_48)
    
    if (ebx != esi_1)
        if (arg3[1] == arg3[2])
            sub_4170d0(arg3, 1)
        
        int32_t* ecx_8 = arg3[1]
        int32_t* var_24_1 = ecx_8
        int32_t* var_28_1 = ecx_8
        var_8_2.b = 2
        
        if (ecx_8 != 0)
            ecx_8[4] = 0
            ecx_8[5] = 0
            ecx_8[5] = 0xf
            bool cond:0_1 = ecx_8[5] u< 0x10
            ecx_8[4] = 0
            int32_t* eax_9
            
            if (cond:0_1)
                eax_9 = ecx_8
            else
                eax_9 = *ecx_8
            
            *eax_9 = 0
            sub_403490(ecx_8, ebx, esi_1 - ebx)
        
        var_8_2.b = 1
        arg3[1] += 0x18
    
    ecx_4 = eax_6
    
    if (esi_1 == ecx_4)
        break
    
    char* eax_8
    eax_8.b = *esi_1
    
    if (eax_8.b u< 0x81 || eax_8.b u> 0x9f)
        eax_8.b += 0x20
        
        if (eax_8.b u<= 0xf)
            goto label_6307b5
        
        if (arg5 != 0)
            if (arg3[1] == arg3[2])
                sub_4170d0(arg3, 1)
            
            char* ecx_12 = arg3[1]
            char* var_28_3 = ecx_12
            char* var_24_3 = ecx_12
            var_8_2.b = 4
            
            if (ecx_12 != 0)
                void* eax_14
                eax_14.b = *esi_1
                *(ecx_12 + 0x10) = 0
                *(ecx_12 + 0x14) = 0
                *(ecx_12 + 0x14) = 0xf
                bool cond:1_1 = *(ecx_12 + 0x14) u< 0x10
                char var_1c_1 = eax_14.b
                *(ecx_12 + 0x10) = 0
                char* eax_15
                
                if (cond:1_1)
                    eax_15 = ecx_12
                else
                    eax_15 = *ecx_12
                
                *eax_15 = 0
                sub_4e2870(ecx_12, 1, var_1c_1)
            
            ecx_4 = eax_6
            var_8_2.b = 1
            arg3[1] += 0x18
        
        ebx = &esi_1[1]
    else
    label_6307b5:
        
        if (arg5 != 0)
            if (arg3[1] == arg3[2])
                sub_4170d0(arg3, 1)
            
            int32_t* ecx_10 = arg3[1]
            int32_t* var_28_2 = ecx_10
            int32_t* var_24_2 = ecx_10
            var_8_2.b = 3
            
            if (ecx_10 != 0)
                ecx_10[4] = 0
                ecx_10[5] = 0
                ecx_10[5] = 0xf
                bool cond:2_1 = ecx_10[5] u< 0x10
                ecx_10[4] = 0
                int32_t* eax_13
                
                if (cond:2_1)
                    eax_13 = ecx_10
                else
                    eax_13 = *ecx_10
                
                *eax_13 = 0
                
                if (esi_1 != &esi_1[2])
                    sub_403490(ecx_10, esi_1, 2)
            
            ecx_4 = eax_6
            var_8_2.b = 1
            arg3[1] += 0x18
        
        ebx = &esi_1[2]

void* var_3c

if (var_3c != 0)
    int32_t var_34
    sub_403160(var_3c, (var_34 - var_3c) s>> 2, 4)
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0

void* var_44
sub_406910(&var_44)
sub_403160(var_44, 1, 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
