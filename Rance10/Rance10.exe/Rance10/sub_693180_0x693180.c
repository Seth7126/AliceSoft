// 函数: sub_693180
// 地址: 0x693180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747b58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
(*(*arg1 + 0xc))(__security_cookie ^ &__saved_ebp)
int32_t* eax_4 = data_7fcb5c

if (eax_4 == 0)
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

int32_t eax_6 = (*(*arg2 + 0x10))()
int32_t i_1 = (*(*arg2 + 0x14))()
int32_t* ebx
ebx:1.b = arg3
char eax_7

if (ebx:1.b != 0)
    eax_7 = (*(*arg1[2] + 0xf8))()

if (ebx:1.b == 0 || eax_7 == 0)
    ebx.b = 0
else
    ebx.b = 1

struct common::SuicideRefCounter<class ISurface>::graphengined3d11::CSurface::VTable* var_74
struct common::SuicideRefCounter<class ISurface>::graphengined3d11::CSurface::VTable** ecx_5 =
    &var_74
char var_20 = ebx.b
sub_692dd0(ecx_5)
int32_t var_8_1 = 0

if (ebx.b == 0)
    goto label_693255

if (sub_693050(ecx_5, arg2) != 0)
    int32_t var_6c
    int32_t var_68
    (*(*eax_4 + 0x2c))(&var_74, 0, 0, var_6c, var_68, 0, 0, 0xff)
label_693255:
    int32_t* eax_10 = &var_74
    
    if (ebx.b == 0)
        eax_10 = arg2
    
    bool cond:1_1 = ebx:1.b == 0
    ebx = 1
    
    if (not(cond:1_1))
        int32_t ecx_7 = eax_6
        int32_t i = i_1
        
        if (ecx_7 s> 1)
            while (i s> 1)
                if ((ecx_7.b & 1) != 0)
                    break
                
                if ((i.b & 1) != 0)
                    break
                
                ecx_7 s>>= 1
                ebx += 1
                i s>>= 1
                
                if (ecx_7 s<= 1)
                    break
    
    int32_t* var_38
    sub_693900(&var_38, ebx)
    var_8_1.b = 1
    *var_38 = (*(*eax_10 + 8))(0, 0)
    int32_t eax_14 = (*(*eax_10 + 0x1c))()
    int32_t* ecx_12 = var_38
    ecx_12[1] = eax_14
    ecx_12[2] = 0
    void* var_44
    sub_693860(&var_44, ebx)
    int32_t edi_2 = 1
    var_8_1.b = 2
    
    if (ebx s<= 1)
    label_693355:
        
        if (sub_693480(arg1, eax_6, i_1, ebx, var_38) == 0)
            ebx.b = 0
        else if (sub_693550(arg1, ebx) == 0)
            ebx.b = 0
        else
            arg1[5] = arg2
            (**arg2)()
            arg1[6] = eax_6
            arg1[7] = i_1
            arg1[8].b = (*(*arg2 + 0x24))()
            *(arg1 + 0x21) = (*(*arg2 + 0x28))()
            *(arg1 + 0x22) = arg3
            int32_t edi_5 = (i_1 * eax_6) << 2
            arg1[9] = edi_5
            
            if (arg3 != 0)
                int32_t eax_38
                int32_t edx_5
                edx_5:eax_38 = sx.q(edi_5 * 3)
                arg1[9] = (eax_38 - edx_5) s>> 1
            
            ebx.b = 1
    else
        while (true)
            void* edx_3 = var_44
            int32_t* ecx_15 = edx_3 - 0x30 + edi_2 * 0x30
            int32_t* eax_17
            
            if (edi_2 != 1)
                eax_17 = (edi_2 - 2) * 0x30 + edx_3
            else
                eax_17 = eax_10
            
            if (sub_6935d0(eax_17, eax_6, ecx_15, i_1, edi_2, var_20, eax_17, eax_4) == 0)
                break
            
            void* esi_1 = &var_38[edi_2 * 3]
            *esi_1 = (*(*ecx_15 + 8))(0, 0)
            edi_2 += 1
            *(esi_1 + 4) = (*(*ecx_15 + 0x1c))()
            *(esi_1 + 8) = 0
            
            if (edi_2 s>= ebx)
                goto label_693355
        
        ebx.b = 0
    
    sub_693950(&var_44)
    int32_t* esi_2 = var_38
    int32_t var_30
    sub_403160(esi_2, (var_30 - esi_2) s/ 0xc, 0xc)
else
    ebx.b = 0

void* var_54
int32_t var_4c

if (var_54 != 0)
    sub_403160(var_54, var_4c - var_54, 1)
void* eax_45
eax_45.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_45
