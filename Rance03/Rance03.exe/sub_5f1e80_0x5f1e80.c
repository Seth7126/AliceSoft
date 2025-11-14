// 函数: sub_5f1e80
// 地址: 0x5f1e80
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
int32_t ecx = *(ebp i+ 8)
int32_t edi_1 = ecx
int32_t eax = int.d(fconvert.t(fconvert.s(st0)))

if (eax s< ecx)
    edi_1 = eax

int32_t ecx_1 = ecx
int32_t eax_1 = int.d(fconvert.t(fconvert.s(sub_6b1380(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(*(ebp i+ 0x14)))))))

if (eax_1 s< ecx_1)
    ecx_1 = eax_1

int32_t var_8_1 = ecx_1
int32_t eax_2 = ecx_1

if (edi_1 s> ecx_1)
    eax_2 = edi_1

double var_20_2
void* eax_30
int32_t* edi_5

if (ecx_1 s<= 0 || ecx_1 s<= edi_1)
    edi_5 = arg4
    int32_t esi_4 = *esi
    var_20_2:4.d = 0
    var_20_2.d = zx.d(*(ebp i+ 0xe))
    var_20_2:4.d = (*(*edi_5 + 0x14))(zx.d(*(ebp i+ 0xc)), zx.d(*(ebp i+ 0xd)), var_20_2)
    int32_t eax_53 = (*(*edi_5 + 0x10))()
    *(arg3 + 8)
    var_20_2:4.d = eax_53
    var_20_2.d = 0
    int32_t var_24_7 = 0
    (*(esi_4 + 0x64))(edi_5, 0, 0)
    eax_30 = arg3 + 0x50
    
    if (edi_1 s<= 0)
        eax_30 = arg3 + 0xc
else
    int32_t esi_1 = *esi
    var_20_2:4.d = 0
    var_20_2.d = zx.d(*(ebp i+ 0x1a))
    int32_t eax_9 =
        (*(*arg4 + 0x10))((*(*arg4 + 0x14))(zx.d(*(ebp i+ 0x18)), zx.d(*(ebp i+ 0x19)), var_20_2))
    *(arg3 + 8)
    var_20_2:4.d = 0
    var_20_2.d = 0
    (*(esi_1 + 0x64))(arg4, 0, eax_9)
    var_18 = 0x20
    int32_t edi_3 = **(arg3 + 4)
    int32_t* eax_16
    
    if (__return_addr s<= 0)
        var_20_2:4.d = divs.dp.d(sx.q(*(arg3 + 0x40)), *(arg3 + 0x44))
        *(arg3 + 0x44)
        var_20_2.d = divs.dp.d(sx.q(*(arg3 + 0x3c)), *(arg3 + 0x44))
        eax_16 = (*(edi_3 + 8))(0)
        arg5 = eax_16
        
        if (eax_16 == 0)
            eax_16.b = 0
            return eax_16
        
        var_20_2:4.d = arg3 + 0xc
        var_20_2.d = eax_16
        sub_5ef470(arg3, var_20_2)
        int32_t esi_3 = **(arg3 + 8)
        var_20_2:4.d = zx.d(*(ebp i+ 0xe))
        var_20_2.d = zx.d(*(ebp i+ 0xd))
        var_20_2:4.d = (*(*eax_16 + 0x14))(zx.d(*(ebp i+ 0xc)), var_20_2)
        var_20_2:4.d = (*(*eax_16 + 0x10))()
        var_20_2.d = 0
        int32_t var_24_5 = 0
        edi_5 = arg6
        *(arg3 + 8)
        (*(esi_3 + 0x20))(edi_5, arg5, arg5, eax_16, 0, 0)
        (*(*arg5 + 4))(0x20)
        eax_30 = arg3 + 0x98
    else
        var_20_2:4.d = divs.dp.d(sx.q(*(arg3 + 0x78)), *(arg3 + 0x44))
        *(arg3 + 0x44)
        var_20_2.d = divs.dp.d(sx.q(*(arg3 + 0x74)), *(arg3 + 0x44))
        eax_16 = (*(edi_3 + 8))(0)
        
        if (eax_16 == 0)
            eax_16.b = 0
            return eax_16
        
        var_20_2:4.d = arg3 + 0x50
        var_20_2.d = eax_16
        sub_5ef470(arg3, var_20_2)
        int32_t esi_2 = **(arg3 + 8)
        arg5 = eax_2 i- edi_1
        var_20_2:4.d = zx.d(*(ebp i+ 0xe))
        var_20_2.d = zx.d(*(ebp i+ 0xd))
        var_20_2:4.d = (*(*eax_16 + 0x14))(zx.d(*(ebp i+ 0xc)), var_20_2)
        int32_t eax_27 = (*(*eax_16 + 0x10))()
        *(arg3 + 8)
        var_20_2:4.d = eax_27
        var_20_2.d = 0
        int32_t var_24_3 = 0
        edi_5 = arg6
        (*(esi_2 + 0x20))(edi_5, arg7, arg7, eax_16, 0, 0)
        (*(*eax_16 + 4))(0x20)
        eax_30 = arg3 + 0x98

var_20_2:4.d = eax_30
var_20_2.d = edi_5
sub_5ef470(arg3, nullptr)
int32_t eax_54
eax_54.b = 1
return eax_54
