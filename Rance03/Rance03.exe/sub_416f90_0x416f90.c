// 函数: sub_416f90
// 地址: 0x416f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1
int32_t edi = arg3
int32_t* esi = arg1

if (edi s>= 0 && edi s< (*(*esi + 0x90))())
    int32_t edx = data_75d4b0
    void* ecx_1
    
    if (edx s< 0 || edx u>= (esi[0x2a] - esi[0x29]) s>> 2)
        ecx_1 = nullptr
    else
        ecx_1 = *(esi[0x29] + (edx << 2)) + 4
    
    if (edi s< (*(ecx_1 + 8) - *(ecx_1 + 4)) s>> 2)
        char* ebx_1 = *(*(ecx_1 + 4) + (edi << 2))
        
        if (ebx_1 != 0)
            arg3.b = 0
            COLORREF color
            
            if (data_74b434 == edx && data_74b438 == edi)
                color = esi[0x20]
            label_41705e:
                SetBkColor(arg2, color)
                sub_41add0(esi, esi[0x21])
                arg3.b = 1
            else if (edx != esi[0x26] || edi != esi[0x27])
                void* ecx_2 = esi[0x18]
                
                if (ecx_2 != 0 && sub_413850(ecx_2, edx, edi) != 0)
                    color = esi[0x22]
                    goto label_41705e
            else
                SetBkColor(arg2, esi[0x28])
                arg3.b = 1
            sub_41b120(esi, arg2, arg4, arg5, ebx_1)
            
            if (arg3.b != 0)
                SetBkColor(arg2, 0xffffff)
                
                if (esi[0x14] != 0)
                    SetTextColor(esi[0x11], 0)
                    esi[0x14] = 0
            
            return sub_41b370(ebx_1)

return 0
