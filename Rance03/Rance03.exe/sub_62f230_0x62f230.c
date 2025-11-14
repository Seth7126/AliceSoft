// 函数: sub_62f230
// 地址: 0x62f230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg3
int32_t* var_4 = edi
void* i_5 = *edi

if (edi[2].b != 3)
    return 

arg1.b = *(edi + 9)

if (arg1.b u< 8)
    uint32_t eax = zx.d(arg1.b)
    
    if (eax == 1)
        void* ebx_9 = ((i_5 - 1) u>> 3) + arg2
        void* ebp_6 = arg2 - 1 + i_5
        void* edx_5 = 7 - ((i_5 - 1) & 7)
        
        if (i_5 != 0)
            void* i_8 = i_5
            void* i
            
            do
                arg1.b = *ebx_9
                arg3.b = edx_5.b
                arg1.b u>>= arg3.b
                arg1.b &= 1
                *ebp_6 = arg1.b
                
                if (edx_5 != 7)
                    edx_5 += 1
                else
                    edx_5 = nullptr
                    ebx_9 -= 1
                
                ebp_6 -= 1
                i = i_8
                i_8 -= 1
            while (i != 1)
            edi = var_4
    else if (eax == 2)
        void* ebx_6 = ((i_5 - 1) u>> 2) + arg2
        void* ebp_4 = arg2 - 1 + i_5
        int32_t edx_4 = (3 - ((i_5 - 1) & 3)) * 2
        
        if (i_5 != 0)
            void* i_7 = i_5
            void* i_1
            
            do
                arg1.b = *ebx_6
                arg3.b = edx_4.b
                arg1.b u>>= arg3.b
                arg1.b &= 3
                *ebp_4 = arg1.b
                
                if (edx_4 != 6)
                    edx_4 += 2
                else
                    edx_4 = 0
                    ebx_6 -= 1
                
                ebp_4 -= 1
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
            edi = var_4
    else if (eax == 4)
        char* ebx_3 = ((i_5 - 1) u>> 1) + arg2
        char* ebp_2 = arg2 - 1 + i_5
        int32_t edx_2 = (i_5 & 1) << 2
        
        if (i_5 != 0)
            void* i_6 = i_5
            void* i_2
            
            do
                arg1.b = *ebx_3
                arg3.b = edx_2.b
                arg1.b u>>= arg3.b
                arg1.b &= 0xf
                *ebp_2 = arg1.b
                
                if (edx_2 != 4)
                    edx_2 += 4
                else
                    edx_2 = 0
                    ebx_3 -= 1
                
                ebp_2 -= 1
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            edi = var_4
    
    *(edi + 9) = 8
    *(edi + 0xb) = 8
    edi[1] = i_5

if (*(edi + 9) != 8)
    return 

void* ebx_11 = i_5 - 1 + arg2

if (arg6 s> 0)
    int32_t eax_5 = i_5 << 2
    void* edx_7 = arg2 - 1 + eax_5
    
    if (i_5 != 0)
        void* i_3
        
        do
            uint32_t eax_6 = zx.d(*ebx_11)
            
            if (eax_6 s< arg6)
                eax_6.b = *(eax_6 + arg5)
                *edx_7 = eax_6.b
            else
                *edx_7 = 0xff
            
            *(edx_7 - 1) = *(zx.d(*ebx_11) * 3 + arg4 + 2)
            *(edx_7 - 2) = *(zx.d(*ebx_11) * 3 + arg4 + 1)
            uint32_t ecx_2 = zx.d(*ebx_11)
            ebx_11 -= 1
            *(edx_7 - 3) = *(ecx_2 * 3 + arg4)
            edx_7 -= 4
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
        edi = var_4
    
    edi[2] = 0x20040806
    edi[1] = eax_5
    return 

arg1 = i_5 * 3
void* edx_9 = arg2 - 1 + arg1

if (i_5 != 0)
    void* i_4
    
    do
        uint32_t ecx_3 = zx.d(*ebx_11)
        edx_9 -= 3
        ebx_11 -= 1
        *(edx_9 + 3) = *(ecx_3 * 3 + arg4 + 2)
        *(edx_9 + 2) = *(zx.d(*(ebx_11 + 1)) * 3 + arg4 + 1)
        *(edx_9 + 1) = *(zx.d(*(ebx_11 + 1)) * 3 + arg4)
        i_4 = i_5
        i_5 -= 1
    while (i_4 != 1)

edi[2] = 0x18030802
edi[1] = arg1
