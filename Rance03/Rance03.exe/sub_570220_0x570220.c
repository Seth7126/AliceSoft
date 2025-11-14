// 函数: sub_570220
// 地址: 0x570220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg2
void* ecx = arg4
bool cond:0 = (ebp << 1) + 2 != ecx

if ((ebp << 1) + 2 s< ecx)
    void* edi_1 = (ebp << 1) + 2
    
    do
        int32_t* esi_1 = *(arg3 + (edi_1 << 2) - 4)
        (*(**(arg3 + (edi_1 << 2)) + 8))()
        float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
        unimplemented  {fstp dword [esp+0x10], st0}
        (*(*esi_1 + 8))()
        float var_8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
        unimplemented  {fstp dword [esp+0x14], st0}
        int16_t top = top + 2
        
        if (not(var_c_1 <= var_8_1))
            edi_1 -= 1
        
        arg1 = *(arg3 + (edi_1 << 2))
        ecx = arg4
        *(arg3 + (ebp << 2)) = arg1
        ebp = edi_1
        edi_1 = (edi_1 << 1) + 2
        cond:0 = edi_1 != ecx
    while (edi_1 s< ecx)

if (not(cond:0))
    arg1 = *(arg3 + (ecx << 2) - 4)
    *(arg3 + (ebp << 2)) = arg1
    ebp = ecx - 1

int32_t __saved_esi = arg6
return sub_5702c0(arg1, ebp, arg3, arg2, arg5)
