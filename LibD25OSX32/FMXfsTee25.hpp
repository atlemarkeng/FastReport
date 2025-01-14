﻿// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMXfsTee25.dpk' rev: 32.00 (MacOS)

#ifndef Fmxfstee25HPP
#define Fmxfstee25HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// (rtl)
#include <SysInit.hpp>
#include <FMX.fs_ichartrtti.hpp>
#include <System.Types.hpp>	// (rtl)
#include <Posix.Base.hpp>	// (rtl)
#include <Posix.Dlfcn.hpp>	// (rtl)
#include <Posix.StdDef.hpp>	// (rtl)
#include <Posix.SysTypes.hpp>	// (rtl)
#include <Posix.Fcntl.hpp>	// (rtl)
#include <Posix.SysStat.hpp>	// (rtl)
#include <Posix.Signal.hpp>	// (rtl)
#include <Posix.Time.hpp>	// (rtl)
#include <Posix.SysTime.hpp>	// (rtl)
#include <Posix.Locale.hpp>	// (rtl)
#include <System.Internal.Unwinder.hpp>	// (rtl)
#include <Macapi.Mach.hpp>	// (rtl)
#include <Macapi.CoreServices.hpp>	// (rtl)
#include <Macapi.CoreFoundation.hpp>	// (rtl)
#include <System.SysConst.hpp>	// (rtl)
#include <Posix.Iconv.hpp>	// (rtl)
#include <Posix.Dirent.hpp>	// (rtl)
#include <Posix.Errno.hpp>	// (rtl)
#include <Posix.Fnmatch.hpp>	// (rtl)
#include <Posix.Langinfo.hpp>	// (rtl)
#include <Posix.Sched.hpp>	// (rtl)
#include <Posix.Pthread.hpp>	// (rtl)
#include <Posix.Stdio.hpp>	// (rtl)
#include <Posix.Stdlib.hpp>	// (rtl)
#include <Posix.String_.hpp>	// (rtl)
#include <Posix.SysSysctl.hpp>	// (rtl)
#include <Posix.Unistd.hpp>	// (rtl)
#include <Posix.Utime.hpp>	// (rtl)
#include <Posix.Wordexp.hpp>	// (rtl)
#include <Posix.Pwd.hpp>	// (rtl)
#include <Posix.Semaphore.hpp>	// (rtl)
#include <Posix.SysUio.hpp>	// (rtl)
#include <Posix.SysSocket.hpp>	// (rtl)
#include <Posix.ArpaInet.hpp>	// (rtl)
#include <Posix.NetinetIn.hpp>	// (rtl)
#include <System.RTLConsts.hpp>	// (rtl)
#include <Posix.Wchar.hpp>	// (rtl)
#include <Posix.Wctype.hpp>	// (rtl)
#include <System.Character.hpp>	// (rtl)
#include <System.Internal.MachExceptions.hpp>	// (rtl)
#include <System.Internal.ExcUtils.hpp>	// (rtl)
#include <System.SysUtils.hpp>	// (rtl)
#include <System.VarUtils.hpp>	// (rtl)
#include <System.Variants.hpp>	// (rtl)
#include <System.Generics.Collections.hpp>	// (rtl)
#include <Posix.SysMman.hpp>	// (rtl)
#include <System.Internal.Unwind.hpp>	// (rtl)
#include <System.Hash.hpp>	// (rtl)
#include <System.Math.hpp>	// (rtl)
#include <System.Rtti.hpp>	// (rtl)
#include <System.TypInfo.hpp>	// (rtl)
#include <System.Generics.Defaults.hpp>	// (rtl)
#include <Posix.StrOpts.hpp>	// (rtl)
#include <Posix.SysSelect.hpp>	// (rtl)
#include <Macapi.ObjCRuntime.hpp>	// (rtl)
#include <System.Classes.hpp>	// (rtl)
#include <System.UITypes.hpp>	// (rtl)
#include <System.Math.Vectors.hpp>	// (rtl)
#include <System.Messaging.hpp>	// (rtl)
#include <System.Actions.hpp>	// (rtl)
#include <System.ImageList.hpp>	// (rtl)
#include <FMX.Consts.hpp>	// (fmx)
#include <Macapi.CocoaTypes.hpp>	// (rtl)
#include <Macapi.OCMarshal.hpp>	// (rtl)
#include <Macapi.Consts.hpp>	// (rtl)
#include <Macapi.OCBlocks.hpp>	// (rtl)
#include <Macapi.ObjectiveC.hpp>	// (rtl)
#include <Macapi.Foundation.hpp>	// (rtl)
#include <Macapi.QuartzCore.hpp>	// (rtl)
#include <Macapi.AppKit.hpp>	// (rtl)
#include <System.Mac.Devices.hpp>	// (rtl)
#include <System.Devices.hpp>	// (rtl)
#include <System.Analytics.hpp>	// (rtl)
#include <System.UIConsts.hpp>	// (rtl)
#include <FMX.Surfaces.hpp>	// (fmx)
#include <System.RegularExpressionsAPI.hpp>	// (rtl)
#include <System.RegularExpressionsConsts.hpp>	// (rtl)
#include <System.RegularExpressionsCore.hpp>	// (rtl)
#include <System.RegularExpressions.hpp>	// (rtl)
#include <FMX.Utils.hpp>	// (fmx)
#include <FMX.Text.hpp>	// (fmx)
#include <FMX.TextLayout.hpp>	// (fmx)
#include <FMX.Graphics.hpp>	// (fmx)
#include <FMX.BehaviorManager.hpp>	// (fmx)
#include <FMX.Styles.hpp>	// (fmx)
#include <FMX.VirtualKeyboard.hpp>	// (fmx)
#include <FMX.Materials.hpp>	// (fmx)
#include <FMX.Types3D.hpp>	// (fmx)
#include <FMX.Filter.hpp>	// (fmx)
#include <System.StrUtils.hpp>	// (rtl)
#include <FMX.Filter.Custom.hpp>	// (fmx)
#include <FMX.Effects.hpp>	// (fmx)
#include <FMX.MultiResBitmap.hpp>	// (fmx)
#include <FMX.Ani.hpp>	// (fmx)
#include <FMX.AcceleratorKey.hpp>	// (fmx)
#include <System.Masks.hpp>	// (rtl)
#include <Macapi.Helpers.hpp>	// (rtl)
#include <System.TimeSpan.hpp>	// (rtl)
#include <System.Mac.CFUtils.hpp>	// (rtl)
#include <System.DateUtils.hpp>	// (rtl)
#include <System.IOUtils.hpp>	// (rtl)
#include <Macapi.CoreGraphics.hpp>	// (rtl)
#include <Macapi.CoreText.hpp>	// (rtl)
#include <FMX.FontGlyphs.Mac.hpp>	// (fmx)
#include <FMX.FontGlyphs.hpp>	// (fmx)
#include <FMX.Objects.hpp>	// (fmx)
#include <FMX.DialogService.Sync.hpp>	// (fmx)
#include <FMX.Dialogs.hpp>	// (fmx)
#include <FMX.DialogService.hpp>	// (fmx)
#include <FMX.Gestures.Mac.hpp>	// (fmx)
#include <FMX.Gestures.hpp>	// (fmx)
#include <FMX.ImgList.hpp>	// (fmx)
#include <FMX.Menus.hpp>	// (fmx)
#include <FMX.Controls.hpp>	// (fmx)
#include <FMX.Materials.Canvas.hpp>	// (fmx)
#include <FMX.Canvas.GPU.Helpers.hpp>	// (fmx)
#include <FMX.StrokeBuilder.hpp>	// (fmx)
#include <FMX.Canvas.GPU.hpp>	// (fmx)
#include <FMX.TextLayout.GPU.hpp>	// (fmx)
#include <FMX.StdActns.hpp>	// (fmx)
#include <FMX.Presentation.Messages.hpp>	// (fmx)
#include <FMX.Controls.Model.hpp>	// (fmx)
#include <FMX.Presentation.Factory.hpp>	// (fmx)
#include <FMX.Presentation.Style.hpp>	// (fmx)
#include <FMX.Controls.Presentation.hpp>	// (fmx)
#include <FMX.Styles.Objects.hpp>	// (fmx)
#include <FMX.Styles.Switch.hpp>	// (fmx)
#include <FMX.Switch.Style.hpp>	// (fmx)
#include <FMX.StdCtrls.hpp>	// (fmx)
#include <FMX.InertialMovement.hpp>	// (fmx)
#include <FMX.Layouts.hpp>	// (fmx)
#include <FMX.Header.hpp>	// (fmx)
#include <FMX.Forms.hpp>	// (fmx)
#include <System.Diagnostics.hpp>	// (rtl)
#include <System.SyncObjs.hpp>	// (rtl)
#include <Macapi.KeyCodes.hpp>	// (rtl)
#include <FMX.Helpers.Mac.hpp>	// (fmx)
#include <Macapi.Dispatch.hpp>	// (rtl)
#include <FMX.MagnifierGlass.hpp>	// (fmx)
#include <FMX.SpellChecker.Mac.hpp>	// (fmx)
#include <FMX.SpellChecker.hpp>	// (fmx)
#include <FMX.Edit.Style.hpp>	// (fmx)
#include <FMX.Edit.hpp>	// (fmx)
#include <FMX.DialogHelper.hpp>	// (fmx)
#include <FMX.Dialogs.Mac.hpp>	// (fmx)
#include <Macapi.ImageIO.hpp>	// (rtl)
#include <FMX.Printer.Mac.hpp>	// (fmx)
#include <FMX.Printer.hpp>	// (fmx)
#include <Macapi.PrintCore.hpp>	// (rtl)
#include <FMX.Canvas.Mac.hpp>	// (fmx)
#include <Macapi.OpenGL.hpp>	// (rtl)
#include <FMX.Context.Mac.hpp>	// (fmx)
#include <FMX.KeyMapping.hpp>	// (fmx)
#include <FMX.ListBox.Selection.hpp>	// (fmx)
#include <FMX.ListBox.hpp>	// (fmx)
#include <FMX.DateTimeCtrls.Types.hpp>	// (fmx)
#include <FMX.DateTimeCtrls.hpp>	// (fmx)
#include <FMX.Calendar.Style.hpp>	// (fmx)
#include <FMX.Calendar.hpp>	// (fmx)
#include <FMX.Pickers.Default.hpp>	// (fmx)
#include <FMX.Pickers.hpp>	// (fmx)
#include <FMX.ExtCtrls.hpp>	// (fmx)
#include <FMX.Controls.Mac.hpp>	// (fmx)
#include <FMX.Forms.Border.hpp>	// (fmx)
#include <FMX.Forms.Border.Mac.hpp>	// (fmx)
#include <FMX.Platform.Mac.hpp>	// (fmx)
#include <FMX.Platform.Common.hpp>	// (fmx)
#include <FMX.Clipboard.Mac.hpp>	// (fmx)
#include <FMX.Clipboard.hpp>	// (fmx)
#include <FMX.Platform.hpp>	// (fmx)
#include <FMX.ActnList.hpp>	// (fmx)
#include <FMX.Types.hpp>	// (fmx)
#include <System.AnsiStrings.hpp>	// (rtl)
#include <FMX.fs_xml.hpp>	// (FMXfs25)
#include <FMX.fs_iparser.hpp>	// (FMXfs25)
#include <FMX.fs_iconst.hpp>	// (FMXfs25)
#include <FMX.fs_itools.hpp>	// (FMXfs25)
#include <System.MaskUtils.hpp>	// (rtl)
#include <FMX.fs_isysrtti.hpp>	// (FMXfs25)
#include <FMX.fs_iexpression.hpp>	// (FMXfs25)
#include <FMX.fs_iilparser.hpp>	// (FMXfs25)
#include <FMX.fs_iinterpreter.hpp>	// (FMXfs25)
#include <FMX.fs_iclassesrtti.hpp>	// (FMXfs25)
#include <FMX.fs_ievents.hpp>	// (FMXfs25)
#include <FMX.fs_igraphicsrtti.hpp>	// (FMXfs25)
#include <FMX.Memo.Types.hpp>	// (fmx)
#include <FMX.ScrollBox.Style.hpp>	// (fmx)
#include <FMX.ScrollBox.hpp>	// (fmx)
#include <FMX.Memo.Style.hpp>	// (fmx)
#include <FMX.Memo.hpp>	// (fmx)
#include <FMX.fs_iformsrtti.hpp>	// (FMXfs25)
#include <FMX.Colors.hpp>	// (fmx)
#include <FMXTee.Html.hpp>	// (FMXTee)
#include <FMXTee.Constants.hpp>	// (FMXTee)
#include <FMXTee.Canvas.hpp>	// (FMXTee)
#include <FMXTee.Procs.hpp>	// (FMXTee)
#include <FMXTee.Engine.hpp>	// (FMXTee)
#include <FMXTee.Chart.hpp>	// (FMXTee)
#include <FMXTee.Series.hpp>	// (FMXTee)
// SO_PFX: bpl
// PRG_EXT: .dylib
// OBJ_EXT: .o

//-- user supplied -----------------------------------------------------------

namespace Fmxfstee25
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
}	/* namespace Fmxfstee25 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMXFSTEE25)
using namespace Fmxfstee25;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmxfstee25HPP
