// 函数: sub_433600
// 地址: 0x433600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a668
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = data_7fcb44
struct fileimage::CFileImageMaker::VTable* const var_28 = &fileimage::CFileImageMaker::`vftable'
char* var_24 = nullptr
char* var_20 = nullptr
int32_t var_1c = 0
int32_t var_8_1 = 0
sub_4338f0(&var_28)
sub_6ca100(&var_28, ebx[1])
int32_t* edi = *ebx
void** esi = *edi
char* edi_1

if (esi == edi)
label_433691:
    bool var_14 = ebx[3].b != 0
    sub_4263a0(&var_24, &var_14)
    int32_t eax_4 = ebx[9]
    void* ecx_4 = &ebx[4]
    int32_t esi_1 = *(ecx_4 + 0x10)
    void* edx_1
    
    if (eax_4 u< 0x10)
        edx_1 = ecx_4
    else
        edx_1 = *ecx_4
    
    if (eax_4 u>= 0x10)
        ecx_4 = *ecx_4
    
    int32_t var_3c_3 = 0.d
    sub_6ca200(&var_24, var_20, ecx_4, edx_1 + esi_1)
    var_14 = false
    sub_4263a0(&var_24, &var_14)
    char* ebx_1 = var_20
    edi_1 = var_24
    
    while (((ebx_1.b - edi_1.b) & 3) != 0)
        var_14 = false
        sub_4263a0(&var_24, &var_14)
        ebx_1 = var_20
        edi_1 = var_24
    
    ebx = ebx_1 - edi_1
    int32_t eax_11
    int32_t edx_2
    edx_2:eax_11 = sx.q(ebx)
    
    if ((*(*arg1 + 0x40))((eax_11 + (edx_2 & 3)) s>> 2) != 0)
        sub_700660((*(*arg1 + 0xc))(0), edi_1, ebx)
        ebx.b = 1
    else
        ebx.b = 0
else
    while (true)
        if (sub_432ff0(&esi[2], &var_28) == 0)
            edi_1 = var_24
            ebx.b = 0
            break
        
        esi = *esi
        
        if (esi == edi)
            goto label_433691

if (edi_1 != 0)
    sub_403160(edi_1, var_1c - edi_1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
