/****************************************************************************** **																			 ** ** 	Module:		TtGouraud.c												 ** ** 																		 ** ** 	Purpose: 	Empty rasterizer drawing engine.						 ** ** 				Methods for drawing Gouraud-shaded triangles.			 ** ** 																		 ** ** 	Author:		Mike W. Kelley											 ** ** 																		 ** **					2/3/95	Revised for 0.9 SDK release						 ** ** 																		 ** ** 	Copyright (C) 1994-95 Apple Computer, Inc.  All rights reserved.	 ** ** 	Apple Computer Confidential											 ** ** 																		 ** *****************************************************************************/#include "RAVE.h"#include "RAVE_system.h"#include "TtTinselTown.h"/************************************************************************************************ * Draw a Gouraud-shaded triangle. ***********************************************************************************************/void TtDrawTriGouraud (	const TQADrawContext	*drawContext,		/* Draw context */	const TQAVGouraud 	*v0,				/* Vertex 0 */	const TQAVGouraud 	*v1,				/* Vertex 1 */	const TQAVGouraud 	*v2,				/* Vertex 2 */	unsigned long		flags)				/* Flags */{	TTtDrawPrivate		*myPrivate;		myPrivate = (TTtDrawPrivate *) drawContext->drawPrivate;}