// 函数: sub_59c2a0
// 地址: 0x59c2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edi
int32_t var_8 = edi
(*(*arg2 + 0xc4))(0)
(*(*arg2 + 0xc8))(0)
int32_t* ecx_2 = *(arg1 + 0x80)

if (ecx_2 != 0 && (*(*ecx_2 + 0x2c))(0, 0, 0, 1) != 0)
    int32_t ecx_3
    
    if (arg4 == 0)
        ecx_3 = arg3 | 0xff000000
    else
        ecx_3 = 0xffffffff
    
    if ((*(*arg2 + 0xb8))(1, 0, 0, 1, 0, ecx_3) != 0)
        int32_t __saved_esi_4
        int32_t __saved_esi_2 = __saved_esi_4
        int32_t* ebx = (*(*arg2 + 0x58))()
        
        if (ebx != 0)
            (*(*ebx + 0x28))(0, 0, (*(*arg2 + 0x24))((*(*arg2 + 0x28))(0, 0x3f800000)))
            
            if ((*(*ebx + 8))().b != 0)
                int32_t __saved_esi_3
                
                __saved_esi_3 = arg5 == 0 ? 1 : 6
                
                (*(*arg2 + 0xbc))(__saved_esi_3)
                
                if (*(arg1 + 0x10) != 0 && sub_59bb80(arg1 + 0xc).b != 0)
                    (*(*ebx + 0xc))()
                    (*(*ebx + 4))()
                    int32_t eax_18
                    eax_18.b = 1
                    return eax_18
        
        int32_t* eax_8
        eax_8.b = 0
        return eax_8

return 0
