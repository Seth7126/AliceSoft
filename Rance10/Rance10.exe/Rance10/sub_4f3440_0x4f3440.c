// 函数: sub_4f3440
// 地址: 0x4f3440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
void* esi = nullptr
void* var_24 = nullptr
int32_t var_14 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t* eax_3 = arg1
int32_t* edx = nullptr
int32_t var_8_1 = 0
arg1 = nullptr
int32_t* edi = *eax_3
void* result = eax_3[1]
uint32_t ecx_3 = (result - edi + 3) u>> 2

if (edi u> result)
    ecx_3 = 0

if (ecx_3 != 0)
    do
        result = *edi
        void* ecx_4 = *(result + 0x10)
        
        if (*(ecx_4 + 0xaa) != 0 && *(ecx_4 + 0xab) != 0 && *(ecx_4 + 0xb0) != 0)
            result = (*(**(ecx_4 + 0x74) + 0x40))(&var_24, 0)
            edx = arg1
        
        edx += 1
        edi = &edi[1]
        arg1 = edx
    while (edx != ecx_3)
    
    ebx = var_20
    esi = var_24
    var_14 = ebx

if (esi != ebx)
    do
        int32_t i_1 = 3
        int32_t* edi_2 = *esi + 0x80
        int32_t i
        
        do
            result = (*(**edi_2 + 0x14))(eax_2)
            edi_2 = &edi_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        esi += 4
    while (esi != var_14)
    
    esi = var_24

if (esi != 0)
    result = sub_403160(esi, (var_1c - esi) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
