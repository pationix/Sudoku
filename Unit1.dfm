object Form1: TForm1
  Left = 670
  Top = 145
  BorderStyle = bsToolWindow
  Caption = 'Sudoku'
  ClientHeight = 383
  ClientWidth = 576
  Color = clGradientActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object Label82: TLabel
    Left = 36
    Top = 28
    Width = 327
    Height = 325
    AutoSize = False
    Color = clBackground
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label1: TLabel
    Left = 40
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label1Click
  end
  object Label2: TLabel
    Left = 75
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label2Click
  end
  object Label3: TLabel
    Left = 110
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label3Click
  end
  object Label4: TLabel
    Left = 148
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label4Click
  end
  object Label5: TLabel
    Left = 183
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label5Click
  end
  object Label6: TLabel
    Left = 218
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label6Click
  end
  object Label7: TLabel
    Left = 256
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label7Click
  end
  object Label8: TLabel
    Left = 291
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label8Click
  end
  object Label9: TLabel
    Left = 326
    Top = 32
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label9Click
  end
  object Label10: TLabel
    Left = 40
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label10Click
  end
  object Label11: TLabel
    Left = 75
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label11Click
  end
  object Label12: TLabel
    Left = 110
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label12Click
  end
  object Label13: TLabel
    Left = 148
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label13Click
  end
  object Label14: TLabel
    Left = 183
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label14Click
  end
  object Label15: TLabel
    Left = 218
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label15Click
  end
  object Label16: TLabel
    Left = 256
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label16Click
  end
  object Label17: TLabel
    Left = 291
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label17Click
  end
  object Label18: TLabel
    Left = 326
    Top = 67
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label18Click
  end
  object Label19: TLabel
    Left = 40
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label19Click
  end
  object Label20: TLabel
    Left = 75
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label20Click
  end
  object Label21: TLabel
    Left = 110
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label21Click
  end
  object Label22: TLabel
    Left = 148
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label22Click
  end
  object Label23: TLabel
    Left = 183
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label23Click
  end
  object Label24: TLabel
    Left = 218
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label24Click
  end
  object Label25: TLabel
    Left = 256
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label25Click
  end
  object Label26: TLabel
    Left = 291
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label26Click
  end
  object Label27: TLabel
    Left = 326
    Top = 102
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label27Click
  end
  object Label28: TLabel
    Left = 40
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label28Click
  end
  object Label29: TLabel
    Left = 75
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label29Click
  end
  object Label30: TLabel
    Left = 110
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label30Click
  end
  object Label31: TLabel
    Left = 148
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label31Click
  end
  object Label32: TLabel
    Left = 183
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label32Click
  end
  object Label33: TLabel
    Left = 218
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label33Click
  end
  object Label34: TLabel
    Left = 256
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label34Click
  end
  object Label35: TLabel
    Left = 291
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label35Click
  end
  object Label36: TLabel
    Left = 326
    Top = 139
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label36Click
  end
  object Label37: TLabel
    Left = 40
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label37Click
  end
  object Label38: TLabel
    Left = 75
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label38Click
  end
  object Label39: TLabel
    Left = 110
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label39Click
  end
  object Label40: TLabel
    Left = 148
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label40Click
  end
  object Label41: TLabel
    Left = 183
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label41Click
  end
  object Label42: TLabel
    Left = 218
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label42Click
  end
  object Label43: TLabel
    Left = 256
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label43Click
  end
  object Label44: TLabel
    Left = 291
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label44Click
  end
  object Label45: TLabel
    Left = 326
    Top = 174
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label45Click
  end
  object Label46: TLabel
    Left = 40
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label46Click
  end
  object Label47: TLabel
    Left = 75
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label47Click
  end
  object Label48: TLabel
    Left = 110
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label48Click
  end
  object Label49: TLabel
    Left = 148
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label49Click
  end
  object Label50: TLabel
    Left = 183
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label50Click
  end
  object Label51: TLabel
    Left = 218
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label51Click
  end
  object Label52: TLabel
    Left = 256
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label52Click
  end
  object Label53: TLabel
    Left = 291
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label53Click
  end
  object Label54: TLabel
    Left = 326
    Top = 209
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label54Click
  end
  object Label55: TLabel
    Left = 40
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label55Click
  end
  object Label56: TLabel
    Left = 75
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label56Click
  end
  object Label57: TLabel
    Left = 110
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label57Click
  end
  object Label58: TLabel
    Left = 148
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label58Click
  end
  object Label59: TLabel
    Left = 183
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label59Click
  end
  object Label60: TLabel
    Left = 218
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label60Click
  end
  object Label61: TLabel
    Left = 256
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label61Click
  end
  object Label62: TLabel
    Left = 291
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label62Click
  end
  object Label63: TLabel
    Left = 326
    Top = 246
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label63Click
  end
  object Label64: TLabel
    Left = 40
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label64Click
  end
  object Label65: TLabel
    Left = 75
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label65Click
  end
  object Label66: TLabel
    Left = 110
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label66Click
  end
  object Label67: TLabel
    Left = 148
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label67Click
  end
  object Label68: TLabel
    Left = 183
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label68Click
  end
  object Label69: TLabel
    Left = 218
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label69Click
  end
  object Label70: TLabel
    Left = 256
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label70Click
  end
  object Label71: TLabel
    Left = 291
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label71Click
  end
  object Label72: TLabel
    Left = 326
    Top = 281
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label72Click
  end
  object Label73: TLabel
    Left = 40
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label73Click
  end
  object Label74: TLabel
    Left = 75
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label74Click
  end
  object Label75: TLabel
    Left = 110
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label75Click
  end
  object Label76: TLabel
    Left = 148
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label76Click
  end
  object Label77: TLabel
    Left = 183
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label77Click
  end
  object Label78: TLabel
    Left = 218
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label78Click
  end
  object Label79: TLabel
    Left = 256
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label79Click
  end
  object Label80: TLabel
    Left = 291
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label80Click
  end
  object Label81: TLabel
    Left = 326
    Top = 316
    Width = 33
    Height = 33
    Cursor = crCross
    AutoSize = False
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaption
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = Label81Click
  end
  object Timer: TLabel
    Left = 424
    Top = 64
    Width = 88
    Height = 25
    Alignment = taCenter
    AutoSize = False
    Caption = ' 00:00:00 '
    Color = clBackground
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clCream
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object Panel1: TPanel
    Left = 424
    Top = 192
    Width = 25
    Height = 25
    Caption = '1'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
    OnClick = Panel1Click
  end
  object Panel2: TPanel
    Left = 456
    Top = 192
    Width = 25
    Height = 25
    Caption = '2'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Panel2Click
  end
  object Panel3: TPanel
    Left = 488
    Top = 192
    Width = 25
    Height = 25
    Caption = '3'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Panel3Click
  end
  object Panel4: TPanel
    Left = 424
    Top = 160
    Width = 25
    Height = 25
    Caption = '4'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Panel4Click
  end
  object Panel5: TPanel
    Left = 456
    Top = 160
    Width = 25
    Height = 25
    Caption = '5'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = Panel5Click
  end
  object Panel6: TPanel
    Left = 488
    Top = 160
    Width = 25
    Height = 25
    Caption = '6'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Panel6Click
  end
  object Panel7: TPanel
    Left = 424
    Top = 128
    Width = 25
    Height = 25
    Caption = '7'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = Panel7Click
  end
  object Panel8: TPanel
    Left = 456
    Top = 128
    Width = 25
    Height = 25
    Caption = '8'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = Panel8Click
  end
  object Panel9: TPanel
    Left = 488
    Top = 128
    Width = 25
    Height = 25
    Caption = '9'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    OnClick = Panel9Click
  end
  object Panel10: TPanel
    Left = 456
    Top = 224
    Width = 25
    Height = 25
    Caption = 'X'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    OnClick = Panel10Click
  end
  object MainMenu1: TMainMenu
    Top = 352
    object Nowe1: TMenuItem
      Caption = 'Nowe'
      object Latwe1: TMenuItem
        Caption = 'Latwe'
        OnClick = Latwe1Click
      end
      object Trudne1: TMenuItem
        Caption = 'Trudne'
        OnClick = Trudne1Click
      end
    end
    object Reset1: TMenuItem
      Caption = 'Reset'
      OnClick = Reset1Click
    end
    object Opcje1: TMenuItem
      Caption = 'Opcje'
      OnClick = Opcje1Click
    end
    object Kolor1: TMenuItem
      Caption = 'Kolor'
      OnClick = Kolor1Click
    end
    object About1: TMenuItem
      Caption = 'About'
      OnClick = About1Click
    end
  end
  object ColorDialog1: TColorDialog
    Ctl3D = True
    Color = 15389113
    CustomColors.Strings = (
      'ColorA=EAD1B9'
      'ColorB=FFFFFFFF'
      'ColorC=FFFFFFFF'
      'ColorD=FFFFFFFF'
      'ColorE=FFFFFFFF'
      'ColorF=FFFFFFFF'
      'ColorG=FFFFFFFF'
      'ColorH=FFFFFFFF'
      'ColorI=FFFFFFFF'
      'ColorJ=FFFFFFFF'
      'ColorK=FFFFFFFF'
      'ColorL=FFFFFFFF'
      'ColorM=FFFFFFFF'
      'ColorN=FFFFFFFF'
      'ColorO=FFFFFFFF'
      'ColorP=FFFFFFFF')
    Left = 32
    Top = 352
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 64
    Top = 352
  end
end
