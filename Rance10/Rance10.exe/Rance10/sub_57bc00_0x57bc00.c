// 函数: sub_57bc00
// 地址: 0x57bc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
int32_t* var_34 = arg1
int32_t* var_54 = arg1
char eax
int32_t ecx
eax, ecx = sub_57bce0(arg1, arg2.b, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, 
    arg13, arg14, arg15, arg16, arg17, arg18, arg19)

if (eax == 0)
    return 0

int32_t* esi_1 = arg1[7]
int32_t edi_1 = arg1[8]

if (esi_1 == edi_1)
    return 1

while (true)
    int32_t var_34_2 = ecx
    int32_t var_54_2 = ecx
    *esi_1
    eax, ecx = sub_57bc00(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, 
        arg13, arg14, arg15, arg16, arg17, arg18, arg19)
    
    if (eax == 0)
        return 0
    
    esi_1 = &esi_1[1]
    
    if (esi_1 == edi_1)
        return 1
