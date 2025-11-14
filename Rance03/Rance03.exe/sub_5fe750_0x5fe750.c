// 函数: sub_5fe750
// 地址: 0x5fe750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
arg2.b = (*(*ebx + 0x9c))()
char edi = arg2.b

if (sub_5f5c70(arg1, edi) != 0 && sub_5fdf00(arg1, arg5, edi) != 0)
    int32_t* ecx_3
    int32_t* edi_1
    
    if (*(arg1 + 0x44) != 0)
        ecx_3 = arg4
        edi_1 = arg3
    else
        edi_1 = arg4
        ecx_3 = arg3
    
    if ((*(*ecx_3 + 0x2c))(0, 0, 0, 1) != 0 && sub_5f5f60(arg1, ebx) != 0
            && (*(*edi_1 + 0x2c))(0, 0, 0, 1) != 0 && sub_5f5ed0(arg1, ebx) != 0)
        return 1

return 0
