// 函数: sub_62f2d0
// 地址: 0x62f2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745429
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24 = arg3
int32_t var_1c = 0
arg3[4] = 0
arg3[5] = 0
arg3[5] = 0xf
bool cond:0 = arg3[5] u< 0x10
arg3[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg3
else
    eax_3 = *arg3

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_1c_1 = 1
int32_t* eax_5 = (**arg2)(eax_2)
int32_t* var_14 = eax_5
char* ecx_2 = (**arg2)()

if (ecx_2 != 0)
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_2 -= &ecx_2[1]

int32_t* edx_2 = arg4
void* ebx_1 = eax_5 + ecx_2
int32_t* edi_1 = var_14
void* var_20 = ebx_1
int32_t eax_7 = edx_2[4]
int32_t var_18 = eax_7

while (edi_1 u< ebx_1)
    if (_strncmp(edi_1, 
            std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                edx_2), 
            eax_7) != 0)
        int32_t eax_9
        eax_9.b = *edi_1
        
        if (eax_9.b u< 0x81 || eax_9.b u> 0x9f)
            eax_9.b += 0x20
            
            if (eax_9.b u> 0xf)
                edi_1 += 1
            else
                edi_1 += 2
        else
            edi_1 += 2
        
        eax_7 = var_18
    else
        int32_t edx_3 = arg3[5]
        int32_t* eax_10
        
        if (edx_3 u< 0x10)
            eax_10 = arg3
        else
            eax_10 = *arg3
        
        void* ebx_2 = arg3[4]
        int32_t* eax_11
        
        if (edx_3 u< 0x10)
            eax_11 = arg3
        else
            eax_11 = *arg3
        
        sub_6318b0(arg3, eax_11 + ebx_2, ebx_2 + eax_10, var_14, edi_1)
        sub_4055a0(arg3, arg5, 0, 0xffffffff)
        eax_7 = var_18
        edi_1 += eax_7
        ebx_1 = var_20
        var_14 = edi_1
    
    edx_2 = arg4

int32_t edx_4 = arg3[5]
int32_t* eax_13

if (edx_4 u< 0x10)
    eax_13 = arg3
else
    eax_13 = *arg3

void* edi_2 = arg3[4]
int32_t* eax_14

if (edx_4 u< 0x10)
    eax_14 = arg3
else
    eax_14 = *arg3

sub_6318b0(arg3, eax_14 + edi_2, edi_2 + eax_13, var_14, ebx_1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
