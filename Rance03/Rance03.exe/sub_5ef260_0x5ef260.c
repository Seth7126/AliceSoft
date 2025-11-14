// 函数: sub_5ef260
// 地址: 0x5ef260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t* esi = *(arg3 + 8)

if (esi == 0)
    arg1.b = 0
    return arg1

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
float ebp = arg5
int32_t edi
int32_t var_18 = edi
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(*(ebp i+ 0x10))))
arg5 = fconvert.s(st0)
int32_t edi_1 = int.d(fconvert.t(arg5))
int32_t eax = int.d(fconvert.t(fconvert.s(sub_6b1380(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(*(ebp i+ 0x14)))))))
int32_t ecx = eax

if (edi_1 s> eax)
    ecx = edi_1

double var_20_2
void* eax_28
int32_t* edi_5

if (eax s<= 0 || eax s<= edi_1)
    edi_5 = arg4
    int32_t esi_4 = *esi
    var_20_2:4.d = 0
    var_20_2.d = zx.d(*(ebp i+ 0xe))
    var_20_2:4.d = (*(*edi_5 + 0x14))(zx.d(*(ebp i+ 0xc)), zx.d(*(ebp i+ 0xd)), var_20_2)
    int32_t eax_52 = (*(*edi_5 + 0x10))()
    *(arg3 + 8)
    var_20_2:4.d = eax_52
    var_20_2.d = 0
    int32_t var_24_7 = 0
    (*(esi_4 + 0x64))(edi_5, 0, 0)
    eax_28 = arg3 + 0x50
    
    if (int.d(fconvert.t(arg5)) s<= 0)
        eax_28 = arg3 + 0xc
else
    int32_t esi_1 = *esi
    var_20_2:4.d = 0
    var_20_2.d = zx.d(*(ebp i+ 0x1a))
    int32_t eax_7 =
        (*(*arg4 + 0x10))((*(*arg4 + 0x14))(zx.d(*(ebp i+ 0x18)), zx.d(*(ebp i+ 0x19)), var_20_2))
    *(arg3 + 8)
    var_20_2:4.d = 0
    var_20_2.d = 0
    (*(esi_1 + 0x64))(arg4, 0, eax_7)
    var_18 = 0x20
    int32_t edi_3 = **(arg3 + 4)
    int32_t* eax_15
    
    if (int.d(fconvert.t(arg6)) s<= 0)
        var_20_2:4.d = divs.dp.d(sx.q(*(arg3 + 0x40)), *(arg3 + 0x44))
        *(arg3 + 0x44)
        var_20_2.d = divs.dp.d(sx.q(*(arg3 + 0x3c)), *(arg3 + 0x44))
        eax_15 = (*(edi_3 + 8))(0)
        
        if (eax_15 == 0)
            eax_15.b = 0
            return eax_15
        
        var_20_2:4.d = arg3 + 0xc
        var_20_2.d = eax_15
        sub_5ef470(arg3, var_20_2)
        int32_t esi_3 = **(arg3 + 8)
        var_20_2:4.d = zx.d(*(ebp i+ 0xe))
        var_20_2.d = zx.d(*(ebp i+ 0xd))
        var_20_2:4.d = (*(*eax_15 + 0x14))(zx.d(*(ebp i+ 0xc)), var_20_2)
        int32_t eax_43 = (*(*eax_15 + 0x10))()
        *(arg3 + 8)
        var_20_2:4.d = eax_43
        int32_t eax_44 = int.d(fconvert.t(arg6))
        var_20_2.d = 0
        int32_t var_24_5 = 0
        edi_5 = arg7
        (*(esi_3 + 0x20))(edi_5, eax_44, eax_44, eax_15, 0, 0)
        (*(*eax_15 + 4))(0x20)
        eax_28 = arg3 + 0x98
    else
        var_20_2:4.d = divs.dp.d(sx.q(*(arg3 + 0x78)), *(arg3 + 0x44))
        *(arg3 + 0x44)
        var_20_2.d = divs.dp.d(sx.q(*(arg3 + 0x74)), *(arg3 + 0x44))
        eax_15 = (*(edi_3 + 8))(0)
        
        if (eax_15 == 0)
            eax_15.b = 0
            return eax_15
        
        var_20_2:4.d = arg3 + 0x50
        var_20_2.d = eax_15
        sub_5ef470(arg3, var_20_2)
        int32_t esi_2 = **(arg3 + 8)
        int32_t var_8_1 = ecx - int.d(fconvert.t(arg5))
        var_20_2:4.d = zx.d(*(ebp i+ 0xe))
        var_20_2.d = zx.d(*(ebp i+ 0xd))
        var_20_2:4.d = (*(*eax_15 + 0x14))(zx.d(*(ebp i+ 0xc)), var_20_2)
        int32_t eax_25 = (*(*eax_15 + 0x10))()
        *(arg3 + 8)
        var_20_2:4.d = eax_25
        var_20_2.d = 0
        int32_t var_24_3 = 0
        edi_5 = arg7
        (*(esi_2 + 0x20))(edi_5, arg5, arg5, eax_15, 0, 0)
        (*(*eax_15 + 4))(0x20)
        eax_28 = arg3 + 0x98

var_20_2:4.d = eax_28
var_20_2.d = edi_5
sub_5ef470(arg3, nullptr)
int32_t eax_54
eax_54.b = 1
return eax_54
